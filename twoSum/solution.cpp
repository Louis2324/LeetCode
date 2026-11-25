#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> valueToIndex;
        valueToIndex.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            auto it = valueToIndex.find(target - nums[i]);
            if (it != valueToIndex.end())
            {
                return {it->second, i};
            }
            valueToIndex.emplace(nums[i], i);
        }

        return {-1, -1};
    }
};