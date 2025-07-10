#include <iostream>
#include <vector>
using namespace std;
int removedupli(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> nums = {0, 0, 3, 3, 4, 5};
    int result = removedupli(nums);
    for (int i = 0; i < result; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}