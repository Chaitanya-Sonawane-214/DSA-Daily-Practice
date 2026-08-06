#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x)
    {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] < x)
            {
                low = mid + 1;
            }
            else if(nums[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                int temp = mid;
                while(temp > 0 && nums[temp] == nums[temp - 1])
                {
                    temp--;
                }
                return temp;
            }
        }

        return low;   
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {1, 2, 8, 10, 11, 12, 19};
    int x = 5;
    
    int result = sol.lowerBound(nums, x);
    cout << result << endl;
    
    return 0;
}