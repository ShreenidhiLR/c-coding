// #include <iostream>
// #include <vector>
// #include <climits>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> nums = {5, 3, 2, 4, 1};
//     int count = 0;
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] > nums[j])
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
int countInversions = 0;

void sorted(vector<int> &nums, int low, int mid, int hight)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= hight)
    {
        if (nums[left] <= nums[right])
        {

            ans.push_back(nums[left++]);
        }
        else
        {
            ans.push_back(nums[right]);
            countInversions += (mid - left + 1);
            right++;
        }
    }
    while (left <= mid)
    {
        ans.push_back(nums[left++]);
    }
    while (right <= hight)
    {
        ans.push_back(nums[right++]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        nums[low + i] = ans[i];
    }
}
void meargesort(vector<int> &nums, int low, int hight)
{
    if (low >= hight)
    {
        return;
    }
    int mid = (low + hight) / 2;
    meargesort(nums, low, mid);
    meargesort(nums, mid + 1, hight);
    sorted(nums, low, mid, hight);
}

int main()
{
    vector<int> nums = {5, 3, 2, 4, 1};
    int n = 5;

    meargesort(nums, 0, n - 1);
    cout << countInversions;

    return 0;
}