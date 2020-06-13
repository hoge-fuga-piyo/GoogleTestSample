#include <gtest/gtest.h>

/*
 * Range���g���ĕ����̒l�𐶐�����
 */
class PTest1 : public::testing::TestWithParam<int> {};

INSTANTIATE_TEST_CASE_P(
	RangeTest
	, PTest1
	, ::testing::Range(0, 100, 5) // 0 <= x < 100�̒l��5���݂ɍ��
);

TEST_P(PTest1, range) {
	auto x = GetParam();
	EXPECT_EQ(x % 5, 0);
}

/*
 * Values���g���ĕ����̒l�𐶐�����
 */
class PTest2 : public::testing::TestWithParam<int> {};

INSTANTIATE_TEST_CASE_P(
	ValuesTest
	, PTest2
	, ::testing::Values(0, 5, 10, 15) // 0 <= x < 100�̒l��5���݂ɍ��
);

TEST_P(PTest2, values) {
	auto x = GetParam();
	EXPECT_EQ(x % 5, 0);
}

/*
 * ValuesIn���g���ĕ����̒l�𐶐�����
 */
class PTest3 : public::testing::TestWithParam<int> {
};

int arr[] = { 0, 5, 10 };
INSTANTIATE_TEST_CASE_P(
	ValuesInTest
	, PTest3
	, ::testing::ValuesIn(arr) // 0 <= x < 100�̒l��5���݂ɍ��
);

TEST_P(PTest3, values) {
	auto x = GetParam();
	EXPECT_EQ(x % 5, 0);
}