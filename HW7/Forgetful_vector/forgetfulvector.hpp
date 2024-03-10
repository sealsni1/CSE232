#pragma once

#include <vector>

class ForgetfulVector{

    public:
        ForgetfulVector();
        size_t size() const;
        int at(size_t index) const;
        void push_back(int value);

    private:
        std::vector<int> vec;
        std::vector<int> forgotten;

};