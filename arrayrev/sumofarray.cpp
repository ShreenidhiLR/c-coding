#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int sumofelement(vector<int> nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum;
}
int main()
{
    vector<int> nums = {2, 3, 4, 6, 1};
    int result = sumofelement(nums);
    cout << result;
    return 0;
}