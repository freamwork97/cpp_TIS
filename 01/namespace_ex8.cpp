#include <iostream>

using namespace std;

int val = 100;

int main(void) {
  int val = 20;  // local
  val += 3;      // local val +
  ::val += 3;    // global val +

  cout << "local val : " << val << endl;
  cout << "global val : " << ::val << endl;

  system("pause");
  return 0;
}