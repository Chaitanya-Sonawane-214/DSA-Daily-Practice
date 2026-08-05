#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        
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

        return -1;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    
    int result = sol.search(nums, target);
    cout << result << endl;
    
    return 0;
}