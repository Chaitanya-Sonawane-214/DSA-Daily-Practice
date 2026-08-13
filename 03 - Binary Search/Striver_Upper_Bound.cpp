#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x)
    {
        int n = nums.size();
        int ans = n;

        int l = 0;
        int h = n-1;

        while(l <= h)
        {
            int mid = l + (h - l) / 2;

            if(nums[mid] > x)
            {
                ans = min(ans, mid);
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return ans;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {2, 3, 6, 7, 8, 8, 11, 11, 12};
    int x = 6;
    
    int result = sol.upperBound(nums, x);
    cout << result << endl;
    
    return 0;
}