#include <gtest/gtest.h>

TEST(CompareTest, assertTest) {
	// ASSERT_*はこけたらそこで強制終了する
	ASSERT_FALSE(true); // この比較でこけるのでここでこのテストを強制終了する
	ASSERT_TRUE(true);	// ↑で強制終了されるのでこの比較は実行されない
}

TEST(CompareTest, expectTest) {
	// EXPECT_*はこけても最後まで処理は走る
	EXPECT_FALSE(true); // この比較はこけるけど強制終了はしない
	EXPECT_TRUE(true);	// ↑で強制終了されないのでこの比較も実行される
	EXPECT_FALSE(true); // この比較も実行される
}
