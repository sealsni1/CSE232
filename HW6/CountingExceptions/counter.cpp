#include <vector>
#include <string>
#include <stdexcept>

#include "name_checker.hpp"

std::vector<int> CountExceptions(std::vector<std::string> const & input){

    std::vector<int> Count = {0, 0, 0};

    for (std::string const & name : input){

        try {
            CheckName(name); // See what value the name returns from name_checker.cpp
        } catch (std::invalid_argument & e){ // If function invalid argument
            ++Count.at(0);
        } catch (std::length_error & e) { // If function length_error
            ++Count.at(1);
        } catch (std::out_of_range & e) { // If function out_of_range
            ++Count.at(2);
        }
    }

    return Count;
}