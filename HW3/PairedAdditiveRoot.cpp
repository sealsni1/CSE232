#include <iostream>
#include <vector>

// 9857843

int main() {
	int value{0};

	while (std::cin >> value) {
        int root{0};
        while (value >= 100){

            int sum{0};

            while (value){
                
                sum += value % 10; // Grabs the first two numbers from value

                value /= 10; // Takes the two last numbers away from value

                sum += (value % 10) *10;
                value /= 10;
            }
            value = sum;
        }
        root = value;
        std::cout << root << std::endl;
	}
}