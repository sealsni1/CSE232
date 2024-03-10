#include <iostream>
#include <cctype>
#include <string>


// I was having issue with this Question so I looked for help on piazza and found this post
// https://piazza.com/class/lqgqqzwvrv67ih/post/148

std::string Words(std::string line_char) {


    line_char += "\n";
    std::string new_line = "";
    std::string word = "";
    int line_length = static_cast<int>(line_char.size());

    // For word in line
    for (int i = 0; i < line_length; ++i) {

        // If there is not a space at line_char[i] add the space to word
        if (!std::isspace(line_char.at(i))) {
            word += line_char.at(i);

        // If there is a space and the size of the word is 5+ add it to new_line
        } else {
        if (word.size() >= 5) {
            new_line += word + " ";
        }
        word.clear();
        }
  }
  return new_line;
}

int main() {
  std::string line;

  while (std::getline(std::cin, line)) {
    std::cout << Words(line) << std::endl;
  }
  return 0;
}