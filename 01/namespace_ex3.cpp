#include <iostream>

namespace Company1 {
void func(void);
void hello(void);
}  // namespace Company1

namespace Company2 {
void func(void);
}

int main(void) {
  Company1::func();

  system("pause");
  return 0;
}

void Company1::hello(void) { std::cout << "hello" << std::endl; }

void Company1::func(void) {
  std::cout << "Functions defined by Company1" << std::endl;
  hello();
  Company2::func();
}

void Company2::func(void) {
  std::cout << "Functions defined by Company2" << std::endl;
}