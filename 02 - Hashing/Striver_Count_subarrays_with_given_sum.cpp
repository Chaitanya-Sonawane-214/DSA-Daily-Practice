#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        int sum = 0;
        int count = 0;
        mp[0] = 1;

        for(int i=0; i<n; i++)
        {
            sum += nums[i];

            if(mp.find(sum - k) != mp.end())
            {
                count += mp[sum - k];
            }
            
            mp[sum]++;

        }

        return count;   
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {1, 2, 3};
    int k = 3;
    
    int result = sol.subarraySum(nums, k);
    cout << result << endl;
    
    return 0;
}