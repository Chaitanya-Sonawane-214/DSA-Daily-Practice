#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans;

        for(int i=0; i<n; i++)
        {
            int value = abs(nums[i]) - 1;
            nums[value] = - abs(nums[value]);
        }   
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] > 0)
            {
                int value = i;
                ans.push_back(++value);
            }
        }

        return ans;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    
    vector<int> result = sol.findDisappearedNumbers(nums);
    
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}