#include "pch.h"

TEST(TestCaseName, TestName1) {
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(2, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(1, 1);
  EXPECT_EQ(4, 1);
  EXPECT_EQ(1, 1);
}
TEST(TestCaseName, TestName2) {
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	ASSERT_EQ(4, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(4, 1);
}