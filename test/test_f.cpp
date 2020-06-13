#include <gtest/gtest.h>

class SampleTest : public::testing::Test {
protected:
	int val;

	virtual void SetUp() {
		val = 100;
	}

	bool returnTrue() const {
		return true;
	}
};

TEST_F(SampleTest, test1) {
	EXPECT_EQ(val, 100);
	EXPECT_TRUE(returnTrue());
}
