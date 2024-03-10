#include <iostream>
#include <string>
#include <vector>

std::string IsWord(std::string guess, std::string secret_word){

    std::string result = "";

    for (int i = 0; i < static_cast<int>(secret_word.length()); ++i){
        if (guess.at(i) == secret_word.at(i)){
            result += secret_word.at(i);
        } else if (secret_word.find(guess.at(i)) != std::string::npos){
            result += '?';
        } else {
            result += '.';
        }
    }
    return result;
}


int main(){

    std::string secret_word;

    std::cout << "Give me a secret word: " << '\n';
    std::cin >> secret_word;

    int count {0};

    while(count < 6){

        std::string guess;

        std::cout << "Give me a guess: " << '\n';
        std::cin >> guess;

        if (!(std::cin >> guess)){
          std::cout << "You Lose.";
          break;
        }

        std::string result = IsWord(guess, secret_word);

        if (result == secret_word){
            std::cout << result << '\n';
            std::cout << "You Win!";
            break;
        }

        std::cout << result << '\n';

        count++;

        if (count == 6){
            std::cout << "You Lose.";
        }
    }

    return 0;
}