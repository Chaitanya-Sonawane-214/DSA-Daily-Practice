#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int longestConsecutive(vector<int>& nums) 
        {
            int n = nums.size();
            unordered_set<int> st;
            int length = 0;
            
            for(int i=0; i<n; i++)
            {
                st.insert(nums[i]);
            }
                
            for(auto it : st)
            {
                if(st.find(it - 1) == st.end())
                {
                    int count = 1;
                    int x = it;
                    
                    while(st.find(x + 1) != st.end())
                    {
                        x += 1;
                        count += 1;
                    }
                    
                    length = max(length, count);
                }
            }

            return length;
        }
};

int main() 
{
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    
    int result = sol.longestConsecutive(nums);
    cout << result << endl;
    
    return 0;
}