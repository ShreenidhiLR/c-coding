#include <iostream>
#include <vector>
using namespace std;
void meargearray(vector<int>&arr,int low,int mid,int high)
{vector<int>ans;
    int st=low;
    int end=mid+1;
    while(st<=mid && end<=high)
    {
        if(arr[st]<arr[end])
        {
            ans.push_back(arr[st]);
            st++;
        }
        else{
            ans.push_back(arr[end]);
            end++;
        }
    }
    while(st<=mid)
    {
        ans.push_back(arr[st++]);
    }
    while(end<=high)
    {
        ans.push_back(arr[end++]);
    }
    for(int i=0;i<ans.size();i++)
    {
        arr[low+i]=ans[i];
    }
}
void meargesort(vector<int>&arr,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    meargesort(arr,low,mid);
    meargesort(arr,mid+1,high);
    meargearray(arr,low,mid,high);
}

int main() {
 vector<int>arr={3,2,5,6,9,0,4,3};
 meargesort(arr,0,arr.size()-1);
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}