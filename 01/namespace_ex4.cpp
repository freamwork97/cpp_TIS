#include <iostream>

namespace Parent {
int num = 0;
namespace Son {
int num = 1;
}
namespace Daughter {
int num = 2;
}
}  // namespace Parent

int main(void) {
  std::cout << Parent::num << std::endl;
  std::cout << Parent::Son::num << std::endl;
  std::cout << Parent::Daughter::num << std::endl;

  system("pause");
  return 0;
}