#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(CheckSum, returnCheckSum5) {
  Solution s;
  std::vector<int> actual = s.CheckSum({1,2,3,4,5},5);
  std::vector<int> expected = {1,2};
  EXPECT_EQ(expected, actual);
}
TEST(CheckSum, returnCheckSum15) {
  Solution s;
  std::vector<int> actual = s.CheckSum({10,3,5,9,7},15);
  std::vector<int> expected = {0,2};
  EXPECT_EQ(expected, actual);
}
TEST(CheckSum, returnCheckSum3) {
  Solution s;
  std::vector<int> actual = s.CheckSum({1,2,3,4,5},3);
  std::vector<int> expected = {0,1};
  EXPECT_EQ(expected, actual);
}
TEST(CheckSum, returnCheckSum) {
  Solution s;
  std::vector<int> actual = s.CheckSum({10,3,5,9,7},100);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}