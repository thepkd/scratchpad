#include "cascadedClasses.h"

int main(){
    // First way usign classes 2 levels
    perType temp;
    //temp.firstMap.insert(std::make_pair(3, perInst()));
    temp.secondMap.insert(std::make_pair(3, perPC(2)));
    temp.secondMap[3].firstMap[2].dataVec[0] = 1;
    std::cout << temp.secondMap[3].firstMap[3].dataVec[0] << std::endl;


    // Second Way 3 levels
    std::map<int,int> l0;
    l0.insert(std::make_pair(1,-1));
    std::map<int, std::map<int,int>> l1;
    l1.insert(std::make_pair(2,l0));
    std::map<int, std::map<int, std::map<int, int>>> l2;
    l2.insert(std::make_pair(3,l1));

//    temp2[3].insert(3, std::make_pair())
    std::cout << l2[3][2][1] << std::endl;
    return 0;
}