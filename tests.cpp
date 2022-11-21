#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("task a") {
  auto v1 = makeVector(10);
  std::vector<int> expected1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto v2 = makeVector(1);
  std::vector<int> expected2{0};
  auto v3 = makeVector(0);
  std::vector<int> expected3;

  CHECK_EQ(v1, expected1);
  CHECK_EQ(v2, expected2);
  CHECK_EQ(v3, expected3);
}

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

TEST_CASE("task c") {
  std::vector<int> va1{1, 2, 3};
  std::vector<int> vb1{4, 5};
  std::vector<int> expected1{1, 2, 3, 4, 5};
  gogeta(va1, vb1);
  CHECK_EQ(va1, expected1);
  CHECK(vb1.empty());

  std::vector<int> va2;
  std::vector<int> vb2;
  gogeta(va2, vb2);
  CHECK(va2.empty());
  CHECK(vb2.empty());

  std::vector<int> va3;
  std::vector<int> vb3{-1, 3};
  gogeta(va3, vb3);
  std::vector<int> expected3{-1, 3};
  CHECK_EQ(va3, expected3);
  CHECK(vb3.empty());

  std::vector<int> va4{4};
  std::vector<int> vb4;
  gogeta(va4, vb4);
  std::vector<int> expected4{4};
  CHECK_EQ(va4, expected4);
  CHECK(vb4.empty());
}