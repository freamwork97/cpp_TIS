#include <iostream>

int main(void) {
  // 배열 선언
  int arr[3] = {1, 2, 3};

  // 각 배열 요소에 대한 레퍼런스 선언
  int& ref1 = arr[0];
  int& ref2 = arr[1];
  int& ref3 = arr[2];

  // 각 배열 요소에 대한 포인터 선언
  int* ptr1 = &arr[0];
  int* ptr2 = &arr[1];
  int* ptr3 = &arr[2];

  // 레퍼런스가 참조하는 값
  std::cout << ref1 << std::endl;
  std::cout << ref2 << std::endl;
  std::cout << ref3 << std::endl;

  // 포인터가 가리키는 주소
  std::cout << ptr1 << std::endl;
  std::cout << ptr2 << std::endl;
  std::cout << ptr3 << std::endl;

  // 포인터가 가리키는 값
  std::cout << *ptr1 << std::endl;
  std::cout << *ptr2 << std::endl;
  std::cout << *ptr3 << std::endl;

  system("pause");
  return 0;
}