#include "Wordlist.h"
#include <iostream>
#include <sstream>

// Return a Boolean value indicating whether or not the provided word begins at the specified position in the word list.
bool AtListPosition(const std::string& wordlist, const std::string& word, size_t position){

    // I asked Chat GPT how to find if a string word was within a string as a stand alone value and
    // this is the block of code they provided to do this. I tried asking on piazza first with not much help.
    // https://chat.openai.com/c/5b675e51-a4d4-47b4-9f39-3042f60d2867
    return (position == 0 || !isalpha(wordlist[position - 1])) && 
       (position + word.size() == wordlist.size() || !isalpha(wordlist[position + word.size()])) &&
       wordlist.substr(position, word.size()) == word;

}

// Return the first position in the word list where the provided word is found.
size_t FindInList(const std::string& wordlist, const std::string& word, size_t startPosition){

    // Iterates through the char's in the list to find the starting place of the first occurance of the word.
    for (size_t i = startPosition; i < wordlist.size(); ++i){
        if (AtListPosition(wordlist, word, i)){
            return i;
        }
    }
    return std::string::npos;
}

// Return a regular string equal to the contents of word1 or word2.
std::string GetFirstInList(const std::string& wordlist, std::string* word1, std::string* word2){
    
    // Create variable to hold the first location of each of the keywords (if present)
    size_t pos1 = FindInList(wordlist, *word1);
    size_t pos2 = FindInList(wordlist, *word2);

    // If neither word is present
    if (pos1 == std::string::npos && pos2 == std::string::npos){
        return "N/A";
    // If word1 is not present return word2
    } else if (pos1 == std::string::npos){
        return *word2;
    // If word2 is not present return word 1
    } else if (pos2 == std::string::npos){
        return *word1;
    // If both are present retrun the one that appears first
    } else {
        return (pos1 < pos2) ? *word1 : *word2;
    }
}

// Return a simple count of how many times the word appears in the word list.
size_t CountInList(const std::string& wordlist, const std::string& word){

    int count {0};
    size_t pos {0};

    while ((pos = FindInList(wordlist, word, pos)) != std::string::npos){         
        count++;
        pos += word.size();
    }
    return count;
}