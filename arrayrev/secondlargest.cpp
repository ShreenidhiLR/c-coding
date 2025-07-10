#include <iostream>
#include <vector>
using namespace std;
int secondlargest(vector<int> &nums)
{
    int largestnumber = INT16_MIN;
    int secondnumber = INT16_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largestnumber)
        {

            largestnumber = nums[i];
        }
        else if (nums[i] > secondnumber && nums[i] < largestnumber)
        {
            secondnumber = nums[i];
            return secondnumber;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {5, 6, 7, 3, 4};
    int result = secondlargest(nums);
    cout << result << endl;

    return 0;
}