#include <iostream>
#include <string>
#include <sstream>

std::string To_Digits(const std::string& input);

std::string To_Digits(const std::string& input){

    std::stringstream ss(input);
    std::string word;

    std::string new_string = "";

    while (ss >> word) {
        
        if (word == "one" || word == "One")
            new_string += "1 ";
        else if (word == "two" || word == "Two")
            new_string += "2 ";
        else if (word == "three" || word == "Three")
            new_string += "3 ";
        else if (word == "four" || word == "Four")
            new_string += "4 ";
        else if (word == "five" || word == "Five")
            new_string += "5 ";
        else if (word == "six" || word == "Six")
            new_string += "6 ";
        else if (word == "seven" || word == "Seven")
            new_string += "7 ";
        else if (word == "eight" || word == "Eight")
            new_string += "8 ";
        else if (word == "nine" || word == "Nine")
            new_string += "9 ";
        else if (word == "zero" || word == "Zero")
            new_string += "0 ";
        else if (word == "nine,")
            new_string += "9, ";
        else 
            new_string += word + " ";
    }
    return new_string;
}


int main(){

    std::string input{""};
    std::getline(std::cin, input);  
    std::cout << To_Digits(input) << std::endl;

    return 0;
}