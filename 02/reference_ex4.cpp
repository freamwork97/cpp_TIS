#include <iostream>

void SwapByRef2(int& ref1, int& ref2) {
  int temp = ref1;
  ref1 = ref2;
  ref2 = temp;
}

int main(void) {
  int val1 = 10;
  int val2 = 20;

  std::cout << "---before swapping---" << std::endl;
  std::cout << "val1: " << val1 << std::endl;
  std::cout << "val2: " << val2 << std::endl;

  SwapByRef2(val1, val2);

  std::cout << "---after swapping---" << std::endl;
  std::cout << "val1: " << val1 << std::endl;
  std::cout << "val2: " << val2 << std::endl;

  system("pause");
  return 0;
}