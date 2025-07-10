#include<iostream>
#include<vector>
using namespace std;
void meargearray( vector<int> &arr,int low,int mid,int high)
{vector<int> ans;
   int left=low;
   int right=mid+1;
   while(left<=mid&& right<=high)
   {
    if(arr[left]<arr[right])
    {
        ans.push_back(arr[left]);
        left++;
    }
    else
    {
        ans.push_back(arr[right]);
        right++;
    }

   }
   while(left<=mid)
   {
    ans.push_back(arr[left++]);
   }
   while(right<=high)
   {
    ans.push_back(arr[right++]);
   }
   for(int i=0;i<ans.size();i++)
   {
    arr[low+i]=ans[i];
   }
}
void meargesort( vector<int>& arr,int low,int high)
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
int main()
{
    vector<int> arr = {3, 5, 1, 6, 2, 3};

     
    meargesort(arr,0,arr.size()-1);
    for (int num : arr) {
    cout << num << " ";
   }
    cout << endl;
 
    return 0;

}