#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using vi = std::vector<int>;

class Solution
{
public:
    void nextPermutation(vi &nums)
    {
        int i = nums.size() - 2;

        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }

        if (i >= 0)
        {
            int j = nums.size() - 1;

            while (nums[j] <= nums[i])
            {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
    }
};

void printVector(vi &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout<<"\n";
}

int main()
{
    vi nums = {1,2,3};
    Solution sol;
    cout << "The next permutation of vector: {1,2,3} is: ";
    sol.nextPermutation(nums);
    printVector(nums);
}