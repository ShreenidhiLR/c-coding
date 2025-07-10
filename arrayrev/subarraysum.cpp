#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void subarraysum(vector<int> nums, int target)
{

    for (int i = 0; i < nums.size() - 1; i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (sum == target)
            {
                cout << "its is found in the indx " << i << "to" << j << endl;
                return;
            }
        }
    }

    cout << "its not found" << endl;
}
int main()
{
    vector<int> nums = {1, 2, 3, 7, 5};
    int target = 12;
    subarraysum(nums, target);

    return 0;
}