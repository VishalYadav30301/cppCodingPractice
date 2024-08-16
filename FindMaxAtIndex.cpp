#include<bits/stdc++.h>
using namespace std;

void FindMaxAtIndex(vector<int>&arr,int n)
{
   int flag,max=INT_MIN;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
        flag=i;
    }
   }
   cout<<max<<endl<<flag<<endl;
  return ;
}


int main()
{
    vector<int>arr;
    cout<<"Enter the size of arr"<<endl;
    int n,x;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {   
        cin>>x;
        arr.push_back(x);
    }
    FindMaxAtIndex(arr,n);
    return 0;
}