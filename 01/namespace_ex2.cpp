#include <iostream>

namespace Company1 {
void func(void);
}

namespace Company2 {
void func(void);
}

int main(void) {
  Company1::func();
  Company2::func();

  system("pause");
  return 0;
}

void Company1::func(void) {
  std::cout << "Functions defined by Company1" << std::endl;
}

void Company2::func(void) {
  std::cout << "Functions defined by Company2" << std::endl;
}