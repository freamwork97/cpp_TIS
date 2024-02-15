#include <iostream>

int main(void) {
  int num = 12;

  // num 변수 주소를 가리키는 포인터 선언
  int* ptr = &num;

  // ptr 포인터의 주소를 가리키는 이중 포인터 선언
  int** dptr = &ptr;

  // num 변수에 대한 레퍼런스 선언
  int& ref = num;

  // ptr 포인터에 대한 레퍼런스 선언
  int*& pref = ptr;

  // dptr 이중 포인터에 대한 레퍼런스 선언
  int**& dpref = dptr;

  std::cout << ref << std::endl;
  std::cout << *pref << std::endl;
  std::cout << **dpref << std::endl;

  system("pause");
  return 0;
}