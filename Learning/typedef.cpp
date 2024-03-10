#include <iostream>

typedef std::string text_t;

// using text_t = std::string;  These are the same thing

int main(){

    std::string text1 = "This is normal";
    text_t text2 = "This is the same";

    std::cout << "Text 1: " << text1 << " Text 2: " << text2 << std::endl;
}