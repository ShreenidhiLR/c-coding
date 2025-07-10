#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
bool alternative(int n)
{
    int oddnum = n % 10;
    n /= 10;
    while (n != 0)
    {
        int evennum = n % 10;
        if ((evennum % 2) == (oddnum % 2))
        {
            return false;
            ;
        }
        oddnum = evennum;
        n /= 10;
    }
    return true;
}

int main()
{
    int n = 22729;
    if (alternative(n))
    {
        cout << " alternative even and odd  number " << n;
    }
    else
    {
        cout << "odd number " << n;
    }

    return 0;
}