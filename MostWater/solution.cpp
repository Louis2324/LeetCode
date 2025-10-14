#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
     int left = 0 , right = height.size() -1 , maxArea = 0;

     while(left<=right) {
        int wdt = right - left;
        int hgt = min(height[left] , height[right]);
        int area = wdt * hgt;
        maxArea = max(maxArea,area);

        if(height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
     }
     return maxArea; 
    }
};


int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution sol;
    cout<<sol.maxArea(height);
}
