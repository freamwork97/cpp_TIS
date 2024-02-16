#include <iostream>

int Adder(const int& a, const int& b) { return a + b; }

int main(void) {
  int num1 = 1;
  int num2 = 2;
  int num3 = Adder(num1, num2);

  std::cout << "num1: " << num1 << std::endl;
  std::cout << "num2: " << num2 << std::endl;
  std::cout << "num3: " << num3 << std::endl;
  std::cout << "Adder(4,5): " << Adder(4, 5) << std::endl;

  system("pause");
  return 0;
}