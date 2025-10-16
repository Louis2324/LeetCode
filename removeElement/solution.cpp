#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int write = 0 , read = 0 ;
       for(read ; read<nums.size() ; read++) {
        if (nums[read] != val) {
            nums[write] = nums[read];
            write++;
        }
       }
      return write;
    }
};
