#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main() {
    std::ifstream input_file("input.txt");

    if (input_file.is_open()) {

        inputfile.close();

    std::string input_line, column_names_line;

    // Read the column names
    std::getline(input_file, column_names_line);

    // Read the input data
    std::getline(input_file, input_line);

    // Use string streams to parse the input
    std::stringstream column_names_stream(column_names_line);
    std::stringstream input_stream(input_line);

    // Store column names in a vector
    std::vector<std::string> column_names;
    std::string column_name;
    while (std::getline(column_names_stream, column_name, ',')) {
        column_names.push_back(column_name);
    }

    // Output the column names
    for (const auto& name : column_names) {
        std::cout << name << ",";
    }
    std::cout << std::endl;

    // Output the corresponding values
    std::string value;
    while (std::getline(input_stream, value, ',')) {
        std::cout << value << ",";
    }
    std::cout << std::endl;

    input_file.close();

    return 0;
}
