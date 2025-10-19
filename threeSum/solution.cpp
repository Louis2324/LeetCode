// Solution for threeSum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      vector<vector<int>> res;
      int n = nums.size() ;
      for(int i  = 0 ; i < n - 2  ; i++) {
        if(i>0 && nums[i] == nums[i-1]) continue;
       int a = nums[i] , left = i + 1 ,right = n - 1;
    
        while (left < right) {
          int total = a + nums[left] + nums[right];

          if(total == 0) {
            res.push_back({a,nums[left],nums[right]});
            while ( left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;
            left++; right--;
          }else if( total < 0) {
            left++;
          } else {
            right--;
          }
        }
     }
     return res;
    }
};