#include <iostream>

int main(void) {
  int num1 = 20;
  int& num2 = num1;  // num1과 같은 메모리 주소를 가진다

  int* num3 = &num1;  // num1의 시작 주소를 가리키는 포인터

  std::cout << "num1: " << &num1 << std::endl;
  std::cout << "num2: " << &num2 << std::endl;
  std::cout << "num3: " << &num3 << std::endl;

  std::cout << "sizeof num1: " << sizeof(num1) << std::endl;
  std::cout << "sizeof num2: " << sizeof(num2) << std::endl;
  std::cout << "sizeof num3: " << sizeof(num3) << std::endl;

  num2 = 3047;
  std::cout << "num1 = " << num1 << std::endl;
  std::cout << "num2 = " << num2 << std::endl;
  std::cout << "num3 = " << num3 << std::endl;

  system("pause");
  return 0;
}