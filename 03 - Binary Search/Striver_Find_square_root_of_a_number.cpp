#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int floorSqrt(int n)  
    {
        if(n == 0)
            return 0;

        long long l = 1, h = n, ans = 1, mid;

        while(l <= h)
        {
            mid = l + (h - l) / 2;
            long long sq = (long long)mid * mid;

            if(sq == n)
                return mid;
            else if(sq < n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                h = mid - 1;
            
        }
        return ans;    

    }
};

int main() 
{
    Solution sol;
    int n = 36;

    int result = sol.floorSqrt(n);

    cout << result << endl;

    return 0;
}