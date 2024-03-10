#include <iostream>
#include <string>

int Matches (char w1, char w2, char w3){

    int matching{0};

    if (w1 != '\0' && w2 != '\0' && w1 == w2){
        ++matching;
    }
    if (w1 != '\0' && w3 != '\0' && w1 == w3){
        ++matching;
    }
    if (w2 != '\0' && w3 != '\0' && w2 == w3){
        ++matching;
    }

    return matching;
}

std::string SharedLetters(std::string const & w1, std::string const w2, std::string const * const ptr_w3){

    std::string const w3 = *ptr_w3;
    std::string result;

    for (int i =0;; i++){

        // I have no clue whats going on here but this is how this Piazza post showed how to do this:
        // https://piazza.com/class/lqgqqzwvrv67ih/post/191
        std::string::size_type i_unsigned = static_cast<std::string::size_type>(i);
        if (i_unsigned >= w1.size() && i_unsigned >= w2.size() && i_unsigned >= w3.size()) {
            break;
        }

        char char_w1 {'\0'};
        char char_w2 {'\0'};
        char char_w3 {'\0'};

        if (i_unsigned < w1.size()) {
            char_w1 = w1.at(i_unsigned);
        }
        if (i_unsigned < w2.size()) {
            char_w2 = w2.at(i_unsigned);
        }
        if (i_unsigned < w3.size()) {
            char_w3 = w3.at(i_unsigned);
        }
        int match = Matches(char_w1, char_w2, char_w3);
        result += std::to_string(match) + ",";
        }
        
        return result;
    }

int main(){

    std::string w1, w2, w3;

    std::cin >> w1 >> w2 >> w3;
    std::cout << SharedLetters(w1, w2, &w3) << std::endl;

    return 0;
}