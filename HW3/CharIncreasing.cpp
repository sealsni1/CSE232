#include <iostream>
#include <iomanip>
#include <cctype>

int main(){

    std::cin >> std::noskipws;

    char last_character{'0'};
    char character{'0'};

    while (std::cin >> character){

        if (character == '\n'){
            std::cout << std::endl;
            last_character = '0';
            continue;
        }

        if (character > last_character){

            std::cout << character;
        }
        else{
            std::cout << '_';
        }
        last_character = character;
    }
    return 0;
}