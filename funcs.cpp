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

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
  for (int &i: vegeta) {
    goku.push_back(i);
  }
  vegeta.clear();
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

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
  std::vector<int> res;
  if (v1.size() > v2.size()) {
    for (int i = 0; i < v1.size(); i++) {
      // ternary operator to check if v2 has no element matching v1[i]
      res.push_back(v1[i] + (i < v2.size() ? v2[i] : 0));
    }
  } else {
    for (int i = 0; i < v2.size(); i++) {
      // ternary operator to check if v1 has no element matching v2[i]
      res.push_back(v2[i] + (i < v1.size() ? v1[i] : 0));
    }
  }
  return res;
}
