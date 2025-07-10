#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int rem = 0;
    int sum = 10;
    int n = 12345;
    while (n != 0)
    {
        rem = n % 10;

        if (sum >= rem)
        {
            cout << false;
            return 0;
        }
        sum = rem;
        n = n / 10;
    }
    cout << true;

    return 0;
}