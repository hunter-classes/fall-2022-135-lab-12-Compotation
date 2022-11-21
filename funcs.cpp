#include <iostream>
#include "funcs.h"

std::vector<int> makeVector(int n) {
  std::vector<int> res;
  if (n < 1) {
    return res;
  }

  res.reserve(n);
  for (int i = 0; i < n; i++) {
    res.push_back(i);
  }
  return res;
}

std::vector<int> goodVibes(const std::vector<int> &v) {
  std::vector<int> result;

  for (int e: v) {
    if (e > 0) {
      result.push_back(e);
    }
  }
  return result;
}

void printVector(const std::vector<int> &vector) {
  bool firstElement = true;
  for (auto e: vector) {
    if (!firstElement) {
      std::cout << "," << e;
    } else {
      std::cout << e;
      firstElement = false;
    }
  }
}