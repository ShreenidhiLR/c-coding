#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int n = 272229;
    int rem = 0;
    int count1 = 0;
    int count2 = 0;
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        n = n / 10;
    }
    cout << "the number of even digit are ->" << count1 << endl
         << " the number of odd digit is -> " << count2 << " " << endl;

    return 0;
}