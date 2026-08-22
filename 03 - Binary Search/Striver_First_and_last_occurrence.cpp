#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) 
    {
        int n = nums.size();
        vector<int> ans = {-1, -1};

        int left_pos = n;
        int right_pos = n;

        int low = 0;
        int high = n - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target)
            {
                left_pos = min(left_pos, mid);
                high = mid - 1;
            }
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }    

        int low_one = 0;
        int high_one = n - 1;
        while(low_one <= high_one)
        {
            int mid = low_one + (high_one - low_one) / 2;

            if(nums[mid] > target)
            {
                right_pos = min(right_pos, mid);
                high_one = mid - 1;
            }
            else
            {
                low_one = mid + 1;
            }
        }

        if(left_pos != n)
        {
            ans[0] = left_pos;
            ans[1] = right_pos - 1;
        }

        return ans;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 6;

    vector<int> result = sol.searchRange(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}