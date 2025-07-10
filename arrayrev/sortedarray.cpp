#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool sorted(vector<int> nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int result = sorted(nums);
    cout << result;

    return 0;
}