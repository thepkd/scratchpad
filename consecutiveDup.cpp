#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::vector<int> nums {1,2,4,4,4,4,4,4,5,6,4,5,10};

    for(auto num : nums)
        std::cout << num << std::endl;

    auto newEnd = std::unique( nums.begin(), nums.end());
    nums.erase(newEnd, nums.end());

    for(auto num : nums)
        std::cout << num << std::endl;

    return 0;
}