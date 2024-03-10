#include <iostream>
#include <vector>
#include <stdexcept>

int SumButScared(std::vector<int> const & input){
  int sum {0};

  for (int i : input){
    if (i % 13 == 0){
      throw std::invalid_argument("Error")
    }
    sum += i;
  }
  return sum;
}