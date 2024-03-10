#include <iostream>
#include <string>

char * Sandwich(std::string & line, char * bread_ptr) {

        for (int i=0; i < static_cast<int>(line.size()) - 2; ++i){

            bool first_match = *bread_ptr == line[i];
            bool second_match = *bread_ptr == line[i + 2];

            if (!first_match || !second_match){
                continue;
            }
            return & line[i + 1];
        }
        return nullptr;
}

int main(){

    std::string line = "Char is a character";
	char bread = 'a';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
}