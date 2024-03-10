#include <vector>
#include <iostream>
#include "traffic_jam.h"

int main() {
  std::vector<std::vector<bool>> road_map = {
    {false, true, false, false},
    {false, false, true, true},
    {true, false, false, false},
    {false, true, false, false}
};
    AreRoadsBalanced(road_map);
    std::cout << AreRoadsBalanced(road_map) << std::endl; // Should be true
    road_map = {
        {false, true, false},
        {true, false, false},
        {false, true, false},
  };
    std::cout << AreRoadsBalanced(road_map) << std::endl; // Should be false

    std::vector<std::vector<bool>> balanced_road_map = {
        {false, true, true, true, false, false, false, false},
        {true, false, false, false, false, false, false, true},
        {false, true, false, true, false, true, false, false},
        {false, false, false, false, true, false, true, false},
        {true, false, true, false, false, false, false, false},
        {false, false, false, false, true, false, true, false},
        {true, false, true, false, false, false, false, true},
        {false, false, false, false, false, true, true, false},
    };
    std::cout << (AreRoadsBalanced(balanced_road_map)) << std::endl;

    std::vector<std::vector<bool>> unbalanced_road_map = {
            {false, true, true, true, false, false, false, false},
            {true, true, false, false, false, true, false, true},
            {false, true, false, true, false, true, false, false},
            {true, false, false, false, true, false, true, false},
            {true, false, true, false, false, false, false, false},
            {false, false, false, true, true, false, true, false},
            {true, false, true, false, false, false, false, true},
            {false, false, false, false, false, true, true, false},
    };
    std::cout << (!AreRoadsBalanced(unbalanced_road_map)) << std::endl;
}
