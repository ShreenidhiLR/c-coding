#include <iostream>
#include <vector>
using namespace std;
int maxnumber(vector<int> nums)
{
    int count = 0;
    int maxnumber = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
            maxnumber = max(maxnumber, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxnumber;
}
int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0};
    int result = maxnumber(nums);
    cout << result << endl;

    return 0;
}