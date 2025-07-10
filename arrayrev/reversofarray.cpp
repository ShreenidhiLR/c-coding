#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void reversofnumber(vector<int> nums)
{
    int n = nums.size();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    reversofnumber(nums);

    return 0;
}