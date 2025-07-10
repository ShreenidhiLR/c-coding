#include <iostream>
#include <vector>
using namespace std;
void recur(int i,int n)
{ 
    if(i>=n)
    {
        return;
    }
    int sum=0;
    sum+=[i];
    recur(i+1,n);
}
int main() {
    int nums[]={2,3,4,5};
    recur(0,nums);
    
    
    
    return 0;
}