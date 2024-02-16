#include <iostream>

int& RefRetFunc(int& ref) {
  ref++;
  return ref;
}

int main(void) {
  int num1 = 1;
  int num2 = RefRetFunc(num1);

  std::cout << "num1: " << num1 << std::endl;
  std::cout << "num2: " << num2 << std::endl;

  num1 += 2;
  num2 += 100;

  std::cout << "num1: " << num1 << std::endl;
  std::cout << "num2: " << num2 << std::endl;
  system("pause");
  return 0;
}