#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int right = 0 ; right < nums.size() ;right++) {
            if(nums[right] != 0) {
              int temp = nums[left];
              nums[left] = nums[right];
              nums[right] = temp;
              left++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0,1,0,3,12};
    Solution sol;

    sol.moveZeroes(nums);
    for(int num : nums) {
      cout<<num<<" ";
    }
}