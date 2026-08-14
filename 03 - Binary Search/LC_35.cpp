#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int BinarySearch(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return low;
    }

    int searchInsert(vector<int>& nums, int target) 
    {
        int num1 = BinarySearch(nums, target);
        return num1;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    
    int result = sol.searchInsert(nums, target);
    cout << result << endl;
    
    
    return 0;
}