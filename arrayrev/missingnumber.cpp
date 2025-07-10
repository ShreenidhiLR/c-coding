#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;
int missing(vector<int> nums)
{
    unordered_map<int, int> map;
    int missing = 0;
    for (int val : nums)
    {
        map[val]++;
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (map[i] == 0)
        {
            missing = i;
        }
    }
    return missing;
}

int main()
{
    vector<int> nums = {1, 3, 4, 5};
    int result = missing(nums);
    cout << result;

    return 0;
}