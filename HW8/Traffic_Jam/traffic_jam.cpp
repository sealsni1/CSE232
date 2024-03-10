#include "traffic_jam.h"

#include <iostream>


bool AreRoadsBalanced(const std::vector<std::vector<bool>>& road_map){

    std::vector<int> Check_col;
    std::vector<int> Check_row;

    for (int i = 0; i < static_cast<int>(road_map.size()); i++){
        for (int j = 0; j < static_cast<int>(road_map.size()); j++){
            if (road_map[i][j] == 1){
                //std::cout << road_map[i][j] << " " << i << " " << j << std::endl;
                if (!std::count(Check_col.begin(), Check_col.end(), j)){
                    Check_col.push_back(j);
                } 
                if (!std::count(Check_row.begin(), Check_row.end(), i)){
                    Check_row.push_back(i);
                }
            }
        
        }
    }

    if (static_cast<int>(road_map.size()) == static_cast<int>(Check_col.size()) && static_cast<int>(road_map.size()) == static_cast<int>(Check_row.size())){
        return true;
    } else {
        return false;
    } 
}

