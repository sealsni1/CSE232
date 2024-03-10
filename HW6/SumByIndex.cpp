#include <iostream>
#include <vector>


std::vector<int> SumByIndex(std::vector<std::vector<int>> const & vec1){

  std::vector<int> new_vec; // Create new vector to hold new values

  for (int i = 0; ; ++i){ // Create an infinite loop unless break
    int sum {0};
    bool check_values = false;
    for (std::vector<int> const & sub_vec : vec1){ // For the sub vectors in the vector
        if (i < static_cast<int>(sub_vec.size())){ // If iteration # is less than size of vector
          check_values = true; // Change bool value to true 
          sum += sub_vec.at(i); // Add the numbers in the sub vectors at the ith position
        }
      }
      if (check_values){ // If not out of range
        new_vec.push_back(sum); // Add new sum to new vector
      } else {
        break; // Once i is out of range break out of loop
      }
    }
    return new_vec;
}


int main(){

    std::vector<std::vector<int>> Vec1 = {{1, 2, 3}, {4, 9}};
    std::cout << SumByIndex(&Vec1) << std::endl;

    return 0;

}