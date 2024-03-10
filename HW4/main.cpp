#include <iostream> 

// Declare Functions before using them
int Triple(int num);
int Closest_Multiple_Of_13(int num);

// Triple the input number the user provided
int Triple(int num){

  int sum = num * 3;

  return sum;
}

// Finds the closest multiple of 13 to the users number
int Closest_Multiple_Of_13(int num){

  int close = round(static_cast<double>(num) / 13) * 13;

  return close;
}

int main(){

    int integer;

    std::cin >> integer;
    
    int doubled = integer * 2;
    std::cout << doubled << std::endl;

    int Tripled = Triple(integer);
    std::cout << Tripled << std::endl;

    int Closest_mult = Closest_Multiple_Of_13(integer);
    std::cout << Closest_mult << std::endl;


}