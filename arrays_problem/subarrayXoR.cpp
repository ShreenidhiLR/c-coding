#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
int subarraysWithXorK(vector<int> nums, int k)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int XOr = 0;
        for (int j = i; j < nums.size(); j++)
        {
            XOr ^= nums[j];
            if (XOr == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";

    return 0;
}