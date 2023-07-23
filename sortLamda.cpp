#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    vector<vector<int>> nums{{0,1}, {5,6}, {2,4}};

    sort(nums.begin(), nums.end(), [](vector<int> a, vector<int> b ){return a[0] > b[0];});

    for(auto inVec : nums){
        cout << inVec[0] << inVec[1] << endl;
    }
}
