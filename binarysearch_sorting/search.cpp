#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> nums,int target)
{
    int st=0;
    int end=nums.size()-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            st=mid+1;
        }
        else{
            end=end-1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums={1,2,3,4,5};
   
    int target=3;
    int result=binarysearch(nums,target);
    cout<<result<<" ";
    
    return 0;
}