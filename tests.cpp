#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("task b") {
  std::vector<int> v1{1, 2, -1, 3, 4, -1, 6};
  auto res1 = goodVibes(v1);
  std::vector<int> expected1{1, 2, 3, 4, 6};
  CHECK_EQ(res1, expected1);

  std::vector<int> v2{2, 10, 8};
  auto res2 = goodVibes(v2);
  std::vector<int> expected2{2, 10, 8};
  CHECK_EQ(res2, expected2);

  std::vector<int> v3{-10, 7, -2, 0, 1, 8};
  auto res3 = goodVibes(v3);
  std::vector<int> expected3{7, 1, 8};
  CHECK_EQ(res3, expected3);
}