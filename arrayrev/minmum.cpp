#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int minmum(vector<int> nums)
{
    int minsum = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i];
        minsum = min(minsum, curr);
    }
    return minsum;
}

int main()
{
    vector<int> nums = {2, 3, 4, 6, 1};
    int result = minmum(nums);
    cout << result;

    return 0;
}