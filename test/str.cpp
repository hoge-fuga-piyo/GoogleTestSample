#include <gtest/gtest.h>

TEST(StrCompareTest, compareTest) {
	char val1[20] = "hoge";
	char val2[20] = "hoge";
	std::cout << sizeof(val1) << ", " << sizeof(val2) << std::endl;
	EXPECT_EQ(val1, val2);		// ‚±‚ê‚Í‚±‚¯‚é
	EXPECT_STREQ(val1, val2);	// ‚±‚ê‚Í‚±‚¯‚È‚¢
}
