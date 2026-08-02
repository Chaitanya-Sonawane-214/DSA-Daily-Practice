#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        int length = 0;
        int sum = 0;
        
        mp[0] = 1;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
            
            if(mp.find(sum-k) != mp.end())
            {
                length += mp[sum-k];
            }
            
            mp[sum]++;
        }

        return length;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    
    int result = sol.subarraySum(nums, k);
    cout << result << endl;
    
    return 0;
}