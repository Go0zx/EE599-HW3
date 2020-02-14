#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(CheckInput, ReturnCheckInput1) {
  Solution solution;
  bool actual = solution.CheckInput("{2k+[5j]}");
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(CheckInput, ReturnCheckInput2) {
  Solution solution;
  bool actual = solution.CheckInput("(7h+[5c)+7]");
  bool expected = false;
  EXPECT_EQ(expected, actual);
}