#include <bits/stdc++.h>
#include<iostream>  
using namespace std;

int solve(vector<int>&arr,int sum,int n)
{
int x,y;
x=INT_MAX;
int pointer;
for(int i=0;i<n;i++)
{
  if(arr[i]< x)
  {
    x=arr[i];
    pointer=i;
  }
}
arr[pointer]=INT_MAX;
y=arr[0];
for(int i=0;i<n;i++)
{
  if(arr[i]< y)
  {
    y=arr[i];
  }
}
if(x+y<sum)
 return x*y;

}


int main()
{
    int T,n,sum;
    cout<<"enter the no of times you want to make this code to run"<<endl;
    cin>>T;
    while(T--)
    {
    cout<<"Enter the size of the arr"<<endl;
    cin>>n;
    if(n<2)
     cout<< -1;
   
    cout<<"enter the sum of elements"<< endl;
    cin>>sum;
    cout<<"enter the arr elements"<<endl;
    vector<int>arr;
    int x;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      arr.push_back(x); 
    }
    cout<<solve(arr,sum,n)<<endl;

  
  }
  return 0;

}