#include <iostream>
#include <vector>
using namespace std;
int main() {
  int nums[]={2,3,4,5};
  int size=sizeof(nums)/sizeof(nums[0]);
  int sum=0;
  for(int i=0;i<size;i++)
  {
   
   sum+=nums[i];
    cout<<sum<<" ";
  }
  cout<<sum<<" ";
 cout<<endl;
    
    
    return 0;
}