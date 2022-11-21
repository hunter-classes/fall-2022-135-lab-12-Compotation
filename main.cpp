#include <iostream>
#include "funcs.h"

int main() {
  std::vector<int> v{1, 2, -1, 3, 4, -1, 6};
  std::vector<int> res = goodVibes(v);
  printVector(res);
  std::cout << "\n";
  printVector(makeVector(10));
  std::cout << "\n";

  std::vector<int> va1{1, 2, 3};
  std::vector<int> vb1{4, 5};
  gogeta(va1, vb1);
  printVector(va1);
  std::cout << "\n";
  printVector(vb1);
  std::cout << "\n\n";

  std::vector<int> va2{1, 2, 3};
  std::vector<int> vb2{4, 5};
  printVector(sumPairWise(va2, vb2));
  std::cout << "\n";
}