#include "funcs.h"

std::vector<int> goodVibes(const std::vector<int> &v) {
  std::vector<int> result;

  for (int e: v) {
    if (e > 0) {
      result.push_back(e);
    }
  }
  return result;
}
