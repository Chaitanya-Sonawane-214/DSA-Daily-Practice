#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) 
    {
        int n = nums.size();
        int l = 0;
        int h = n - 1;

        while(l < h)
        {
            int mid = l + (h - l) / 2;

            if(mid % 2 == 0)
            {
                if(nums[mid] == nums[mid + 1])
                {
                    l = mid + 2;
                }
                else if(mid > 0 && nums[mid] == nums[mid - 1])
                {
                    h = mid - 2;
                }
                else    
                {
                    return nums[mid];
                }
            }
            else
            {
                if(nums[mid] == nums[mid + 1])
                {
                    h = mid - 1;
                }
                else if(nums[mid] == nums[mid - 1])
                {
                    l = mid + 1;
                }
                else
                {
                    return nums[mid];
                }
            }
        }   

        return nums[l]; 
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 7, 8, 8};

    int result = sol.singleNonDuplicate(nums);

    cout << result << endl;

    return 0;
}