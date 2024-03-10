#include <iostream>
#include <cctype>

int main(){
    std::cin >> std::noskipws;
    char characters{'0'};

    // Create variable that starts out as false
    bool whitespace = false;
    while (std::cin >> characters){
        // If the letter is a num or digit return true else false
        bool current_letter = std::isalpha(characters);

        // If the current letter isalpha and the whitespace is false print the letter
        if (current_letter && !whitespace){
            std::cout << characters;
        }
        whitespace = current_letter;
    }
    return 0;
}