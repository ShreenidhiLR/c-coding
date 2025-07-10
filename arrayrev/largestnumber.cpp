#include <iostream>
#include <vector>
using namespace std;
int largestnumber(vector<int> &nums)
{
    int largetnumber = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i];
        largetnumber = max(largetnumber, curr);
    }
    return largetnumber;
}

int main()
{
    vector<int> nums = {3, 3, 6, 1};
    int result = largestnumber(nums);
    cout << result << endl;

    return 0;
}