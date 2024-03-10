#include "forgetfulvector.hpp"

#include <vector>
#include <iostream>

size_t ForgetfulVector::size() const{
    return vec.size();
}

int ForgetfulVector::at(size_t index) const{
    return vec.at(index);
}

void ForgetfulVector::push_back(int value){

    for (int val : forgotten){
        std::cout << "Values: " << val << std::endl;
    }
}