// LeetCode 15: 3Sum (Medium)
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j != k and nums[i] + nums[j] + nums[k] == 0.
// The solution set must not contain duplicate triplets.

#include <vector>
#include <iostream>
#include <algorithm> // Include algorithm for sort

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        // Check if triplet already exists in result
                        bool exists = false;
                        for (const auto& t : result) {
                            if (t == triplet) {
                                exists = true;
                                break;
                            }
                        }
                        if (!exists) {
                            result.push_back(triplet);
                        }
                    }
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);
    // Print the result
    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); ++i) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
