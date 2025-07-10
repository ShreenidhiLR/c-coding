#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;
void frequence(vector<int> nums)
{
    unordered_map<int, int> map;
    for (int val : nums)
    {
        map[val]++;
    }
    for (auto el : map)
    {
        cout << "the element" << " " << el.first << "->frequence" << " " << el.second << endl;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5, 3, 5, 6, 2, 4, 8};
    frequence(nums);

    return 0;
}