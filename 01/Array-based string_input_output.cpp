#include <iostream>

int main(void) {
  char name[100];
  char lang[200];

  std::cout << "What's your name? ";
  std::cin >> name;

  std::cout << "What is your favorite programming language? ";
  std::cin >> lang;

  std::cout << "my name is " << name << std::endl;
  std::cout << "My favorite programming language is " << lang << std::endl;
  system("pause");
  return 0;
}