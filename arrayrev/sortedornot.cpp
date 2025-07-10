#include <iostream>
#include <vector>
using namespace std;
bool sortedarr(vector<int> nums)
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
    int result = sortedarr(nums);
    cout << result << endl;

    return 0;
}