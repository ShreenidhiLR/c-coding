#include<iostream>
using namespace std;
void recur(int x,int n,int sum)
{
   
    if(x>n)
    {
          cout << "Total Sum: " << sum << endl;
        return;
    }

    
    recur(x+1,n,sum+x);
}
int main()
{
    int n=5;
    recur(1,n,0);
    return 0;

}