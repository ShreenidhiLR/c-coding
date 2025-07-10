#include <iostream>
using namespace std;

int main()
{
    int n[5];
    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }

    cout << endl;

    return 0;
}
