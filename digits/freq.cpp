#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int n = 1234555446;
    unordered_map<int, int> map;

    while (n != 0)
    {
        int rem = n % 10;
        map[rem]++;
        n = n / 10;
    }
    for (auto val : map)
    {
        cout << "the number" << " " << val.first << "->" << val.second << endl;
    }
    return 0;
}