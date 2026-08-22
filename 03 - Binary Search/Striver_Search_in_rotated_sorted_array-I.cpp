#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int k) 
    {
        int n = nums.size();
        int l = 0;
        int h = n - 1;

        while(l <= h)
        {
            int mid = l + (h - l) / 2;

            if(nums[mid] == k)
            {
                return mid;
            }
            else if(nums[l] <= nums[mid])
            {
                if(k >= nums[l] && k <= nums[mid])
                {
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                if(k >= nums[mid] && k <= nums[h])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = sol.search(nums, target);

    cout << result << endl;

    return 0;
}