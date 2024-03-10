#include <iostream>

int main(){

    // Set a variable for each number
    int num1, num2, num3, num4;

    std::cin >> num1 >> num2 >> num3 >> num4;

    // Iterate through the numbers in between or equal to each row
    for (int i = num3; i <= num4; ++i){
        for (int j = num1; j <= num2; ++j){
            std::cout << i << '*' << j << '=' << i * j;

        // If the current number is less then the last create a comma to space it out
        if (j < num2){
            std::cout << ", ";
        }
        }
    std::cout << std::endl;
    }
    return 0;
}