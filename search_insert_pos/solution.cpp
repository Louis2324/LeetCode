// Solution for search_insert_pos
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int left = 0 , right = nums.size() - 1 , ans = nums.size();
      while(left <= right) {
        int mid = left + (right - left) /2 ;
        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        } else {
            ans = mid;
            right = mid - 1;
        }
      }  
     return ans;
    }
};