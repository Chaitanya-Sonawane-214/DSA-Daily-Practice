#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  
    {
        int n = nums.size();
        int l = 0;
        int h = n - 1;

        while(l < h)
        {
            if(nums[l] <= nums[h])
            {
                return l;
            }

            int mid = l + (h - l) / 2;

            if(nums[0] <= nums[mid])
            {
                l = mid + 1;
            }
            else
            {
                h = mid;
            }
        }

        return l;    
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {4, 5, 1, 2};

    int result = sol.findKRotation(nums);

    cout << result << endl;

    return 0;
}