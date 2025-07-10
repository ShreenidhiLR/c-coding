#include<iostream>
using namespace std;
void recur(int n)
{
    if(n==0)
    {
        return;
    }
     cout<<n<<" ";
    recur(n-1);
   
}
int main()
{
    int n;
    recur(5);
    return 0;
}