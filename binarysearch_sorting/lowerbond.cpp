#include <iostream>
#include <vector>
using namespace std;
int lowerbound(vector<int>nums,int target )
{
    int st=0;
    int end=nums.size()-1;
    int ans=nums.size();
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]>=target)
        {
            ans=mid;
            end=mid-1;
        }
        
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main() {
   vector<int>nums={1,2,4,4,5,6,7,8};
   int target=10;
   int result=lowerbound(nums,target);
   cout<<result;
    
    
    return 0;
}