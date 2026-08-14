#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) 
    {
        int n = nums.size();
        vector<int> ans = {-1, -1};
        int l = 0;
        int h = n - 1;

        while(l <= h)
        {
            int mid = l + (h - l) / 2;

            if(nums[mid] == x)
            {
                ans[0] = nums[mid];
                ans[1] = nums[mid];

                return ans;
            }
            else if(nums[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }

        if(h >= 0)
            ans[0] = nums[h];
        if(l <= n-1)
            ans[1] = nums[l];
            
        return ans;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int x = 5;

    vector<int> result = sol.getFloorAndCeil(nums, x);

    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;

    return 0;
}