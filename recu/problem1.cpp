#include <iostream>
using namespace std;
void recur(int i,int n)
{
    if(n==0)
    {
        return;
    }
    cout<<i<<" ";
    recur(i+1,n-1);

}

int main()
{
    int n=3;
    int x;
     recur(1,n);
     return 0;
}