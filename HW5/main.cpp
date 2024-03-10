#include <iostream>

#include "Wordlist.h"

int main(){

    // Create the variables to hold the user provided keywords
    std::string keyword1, keyword2;
    std::getline(std::cin, keyword1);
    std::getline(std::cin, keyword2);

    std::string wordlist;

    while(std::getline(std::cin, wordlist)){

        // Get the count of each keyword in the given wordlist
        int count1 = CountInList(wordlist, keyword1);
        int count2 = CountInList(wordlist, keyword2);

        std::string firstkeyword = GetFirstInList(wordlist, &keyword1, &keyword2);

        std::cout << firstkeyword << " " << count1 << " " << count2 << std::endl;
    }
    return 0;
}