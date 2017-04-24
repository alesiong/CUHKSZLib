#include "algorithm.h"
#include "gtest/gtest.h"

TEST(Algorithm, kmpSearch) {
  EXPECT_EQ(cuhksz::kmpSearch("abc", "abc"), 0);
  EXPECT_EQ(cuhksz::kmpSearch("abc", "abc", 1), -1);
  EXPECT_EQ(cuhksz::kmpSearch("abcabced", "abc", 1), 3);
  EXPECT_EQ(cuhksz::kmpSearch("sdeczse", "abc"), -1);
  EXPECT_EQ(cuhksz::kmpSearch("abdecabc", "abc"), 5);
}

TEST(Algorithm, editDistance) {
  EXPECT_EQ(cuhksz::editDistance("this", "tis"), 1);
  EXPECT_EQ(cuhksz::editDistance("", "tis"), 3);
  EXPECT_EQ(cuhksz::editDistance("this", ""), 4);
  EXPECT_EQ(cuhksz::editDistance("this", "thisiswhatweneed"), 12);
  EXPECT_EQ(cuhksz::editDistance("this", "that"), 2);
}

TEST(Algorithm, zip) {
  std::vector<int> a = {1, 2, 3, 4};
  std::vector<int> b = {5, 6, 7, 8};
  std::vector<int> c = {9, 10, 11};
  std::vector<std::vector<int>> result = {{1, 5, 9}, {2, 6, 10}, {3, 7, 11}};
  auto origin = cuhksz::zip(a, b, c);
  EXPECT_EQ(origin, result);
}