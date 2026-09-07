#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  
    {
        int n = arr.size();
        int l = 0;
        int h = n - 1;

        while(l < h)
        {
            if(arr[l] <= arr[h])
            {
                return arr[l];
            }
                
            int mid = l + (h - l) / 2;

            if(arr[0] <= arr[mid])
            {
                l = mid + 1;
            }
            else if(arr[0] > arr[mid])
            {
                h = mid;
            }
        }

        return arr[l];
    }
};

int main() 
{
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};

    int result = sol.findMin(arr);

    cout << result << endl;

    return 0;
}