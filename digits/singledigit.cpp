#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int n = 9875;
    int rem = 0;

    while (n >= 9)
    {
        int sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        n = sum;
    }
    cout << n;

    return 0;
}