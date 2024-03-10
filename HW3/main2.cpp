#include <iostream>
int main() {
  int value{0};
  while (std::cin >> value) {
    int root{0};
    while (value >= 100) {
      int sum_of_digits{0};
      while (value) {
        sum_of_digits += value % 10;
        value /= 10;
        sum_of_digits += (value % 10) * 10;
        value /= 10;
      }
      value = sum_of_digits;
    }
    root = value;
    std::cout << root << std::endl;
  }
}