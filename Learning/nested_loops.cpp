#include <iostream>

int main(){

    int rows;
    int cols; 
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "How many cols: ";
    std::cin >> cols;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
    for (int j = 1; j <= cols; j++){
        std::cout << symbol << ' ';

    }
    std::cout << '\n';
    }

    return 0;
}