#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void pairs(vector<int> nums, int target)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                cout << nums[i] << ", " << nums[j] << endl;
            }
        }
    }
}

int main()
{
    vector<int> nums = {1, 4, 5, 7, -1, 2, 5, 3};
    int target = 6;
    pairs(nums, target);

    return 0;
}