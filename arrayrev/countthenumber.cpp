#include <iostream>
#include <vector>
using namespace std;
void count(vector<int> &nums)
{
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int maxnum0 = 0, maxnum1 = 1, maxnum2 = 2, maxnum3 = 3, maxnum4 = 4, maxnum5 = 5;

    for (int i = 0; i < nums.size(); i++)

    {
        if (nums[i] == 0)
        {
            count0++;
        }

        else if (nums[i] == 1)
        {
            count1++;
        }

        else if (nums[i] == 2)
        {
            count2++;
        }
        else if (nums[i] == 3)
        {
            count3++;
        }

        else if (nums[i] == 4)
        {
            count4++;
        }

        else if (nums[i] == 5)
        {
            count5++;
        }
    }
    int indx = 0;
    for (int i = 0; i < count0; i++)
    {
        nums[indx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        nums[indx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        nums[indx++] = 2;
    }
    for (int i = 0; i < count3; i++)
    {
        nums[indx++] = 3;
    }
    for (int i = 0; i < count4; i++)
    {
        nums[indx++] = 4;
    }
    for (int i = 0; i < count5; i++)
    {
        nums[indx++] = 5;
    }
    cout << "the count of the number";
    cout << count0 << " ";
    cout << count1 << " ";
    cout << count2 << " ";
    cout << count3 << " ";
    cout << count4 << " ";
    cout << count5 << " ";
    cout << endl;
    maxnum0 *= count0;
    cout << maxnum0 << " ";
    maxnum1 *= count1;
    cout << maxnum1 << " ";
    maxnum2 *= count2;
    cout << maxnum2 << " ";
    maxnum3 *= count3;
    cout << maxnum3 << " ";
    maxnum4 *= count4;
    cout << maxnum4 << " ";
    maxnum5 *= count5;
    cout << maxnum5 << " ";
    cout << endl;
}

int main()
{
    vector<int> nums = {2, 1, 0, 2, 3, 0, 1, 2, 4, 1, 5, 3, 0, 1};
    count(nums);
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}