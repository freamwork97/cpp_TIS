#include <iostream>

int main(void) {
  int val1, val2;
  int result = 0;

  std::cout << "Please enter two integers ";
  std::cin >> val1 >> val2;

  if (val1 < val2) {
    for (int i = val1 + 1; i < val2; i++) {
      result += i;
    }
  } else {
    for (int i = val2 + 1; i < val1; i++) {
      result += i;
    }
  }
  std::cout << "the sum of integers between two integers : " << result
            << std::endl;
  system("pause");
  return 0;
}