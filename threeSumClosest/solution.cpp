#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin() , nums.end());
      int n = nums.size();
      int closestSum = nums[0] + nums[1] + nums[2];

      for(int i = 0 ; i < n - 2 ; i++) {
        int left = i + 1 , right = n -1 ;
        while(left < right ) {
          int currSum = nums[i] + nums[left] + nums[right];
          if(abs(currSum - target) < abs(closestSum - target)) {
            closestSum = currSum;
          }
          if(currSum < target) {
            left++;
          }else if(currSum > target) {
            right--;
          }else {
            return currSum;
          }
        }
      }
        return closestSum;
    }
};