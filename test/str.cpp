#include <gtest/gtest.h>

TEST(StrCompareTest, compareTest) {
	char* val1 = "hoge\0fuga";
	char* val2 = "hoge";
	EXPECT_EQ(val1, val2);		// ‚±‚ê‚Í‚±‚¯‚é
	EXPECT_STREQ(val1, val2);	// ‚±‚ê‚Í‚±‚¯‚È‚¢
}
