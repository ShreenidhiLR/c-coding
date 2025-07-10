#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
bool repated(int n)
{
    unordered_map<int, int> map;
    int rem = 0;
    while (n != 0)
    {
        int rem = n % 10;
        map[rem]++;
        if (map[rem] > 1)
        {
            return true;
        }
        n = n / 10;
    }
    return false;
}

int main()
{
    int n = 1234556;
    int result = repated(n);
    cout << result;

    return 0;
}