#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        int length = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
            
            if(sum == k)
            {
                length = max(length, i + 1);
            }

            if(mp.find(sum - k) != mp.end())
            {
                length = max(length, i - mp[sum - k]);
            }
        
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }   

        return length;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
    int result = sol.longestSubarray(nums, k);
    cout << result << endl;
    
    return 0;
}