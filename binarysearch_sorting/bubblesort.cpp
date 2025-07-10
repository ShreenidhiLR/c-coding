#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int>&nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {
    for(int j=0;j<nums.size()-1-i;j++)
    {
        if(nums[j]>nums[j+1])
        {
            int temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }
    }
}

int main() {
    vector<int>nums={2,4,5,1,6,3};
    bubblesort(nums);
    for(int val:nums)
    {
        cout<<val<<" ";
    }
    
    return 0;
}