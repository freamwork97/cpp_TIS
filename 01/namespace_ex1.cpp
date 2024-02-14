#include <iostream>

namespace Company1 {
void func(void) { std::cout << "Functions defined by Company1" << std::endl; }
}  // namespace Company1

namespace Company2 {
void func(void) { std::cout << "Functions defined by Company2" << std::endl; }
}  // namespace Company2

int main(void) {
  Company1::func();
  Company2::func();

  system("pause");
  return 0;
}