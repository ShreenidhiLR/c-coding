#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
bool equalornot(vector<int> a, vector<int> b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {2, 1, 6, 4, 5};
    int result = equalornot(nums1, nums2);
    cout << result;

    return 0;
}