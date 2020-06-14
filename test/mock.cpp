#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "dummy.h"

class MockDummy : public Dummy {
public:
	MOCK_CONST_METHOD0(randomValue, unsigned int());
	// MOCK_METHOD0(randomValue, unsigned int());	// CONST�����Y��Ă��R���p�C���G���[�ɂ͂Ȃ�Ȃ����ǐ��������b�N�ł����e�X�g�������邽�ߒ���
};

TEST(MockTest, test) {
	MockDummy mock_dummy;
	EXPECT_CALL(mock_dummy, randomValue()).WillOnce(testing::Return(1));

	Dummy2 dummy2;
	EXPECT_EQ(dummy2.getRandomValue(mock_dummy), 1);	// ���b�N�͎Q�Ɠn�� or �|�C���^�n���œn���Ă��K�v������B�l�n�����Ƃ��܂����b�N����Ȃ�
}
