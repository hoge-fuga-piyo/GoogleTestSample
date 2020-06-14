#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "dummy.h"

class MockDummy : public Dummy {
public:
	MOCK_CONST_METHOD0(randomValue, unsigned int());
	// MOCK_METHOD0(randomValue, unsigned int());	// CONSTをつけ忘れてもコンパイルエラーにはならないけど正しくモックできずテストがこけるため注意
};

TEST(MockTest, test) {
	MockDummy mock_dummy;
	EXPECT_CALL(mock_dummy, randomValue()).WillOnce(testing::Return(1));

	Dummy2 dummy2;
	EXPECT_EQ(dummy2.getRandomValue(mock_dummy), 1);	// モックは参照渡し or ポインタ渡しで渡してやる必要がある。値渡しだとうまくモックされない
}
