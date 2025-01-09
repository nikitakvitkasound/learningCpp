#include <iostream>

int a = 18;
int b = 6;

int function1(int a, int b) {
  return a - b;
}

int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  int b = 12;
  int c = 0;
  a = function1(b, a);
  c = function2();
  std::cout << "a: " << a << " b: " << b << " c: " << c << '\n';

  std::cout << '\n';
  system("pause");
  return 0;
}
