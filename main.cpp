#include <iostream>
#include "funcs.h"

int main() {
  std::vector<int> v{1, 2, -1, 3, 4, -1, 6};
  std::vector<int> res = goodVibes(v);
  for (auto e: res) {
    std::cout << e << ",";
  }
  std::cout << "\n";
}