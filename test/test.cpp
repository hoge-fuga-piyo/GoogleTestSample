//#include "sample.h"
#include <gtest/gtest.h>

TEST(SampleTest, assertTest) {
	// ASSERT_*�͂������炻���ŋ����I������
	ASSERT_FALSE(true); // ���̔�r�ł�����̂ł����ł��̃e�X�g�������I������
	ASSERT_TRUE(true);	// ���ŋ����I�������̂ł��̔�r�͎��s����Ȃ�
}

TEST(SampleTest, expectTest) {
	// EXPECT_*�͂����Ă��Ō�܂ŏ����͑���
	EXPECT_FALSE(true); // ���̔�r�͂����邯�ǋ����I���͂��Ȃ�
	EXPECT_TRUE(true);	// ���ŋ����I������Ȃ��̂ł��̔�r�����s�����
	EXPECT_FALSE(true); // ���̔�r�����s�����
}
