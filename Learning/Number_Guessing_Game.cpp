#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries{0};

    srand(time(NULL));
    num = (rand() % 1000) + 1;

    std::cout << "***** NUBER GUESSING GAME *****\n";

    do{
        std::cout << "Enter a guess between (1-1000): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
            continue;
        } else if (guess < num){
            std::cout << "Too low!\n";
            continue;
        } else {
            std::cout << "CORRECT! Number of Tries: " << tries << '\n';
        }

    }while(guess != num);

    std::cout << "*******************************\n";

    return 0;
}