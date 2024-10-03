// Write a function SmallLargeSum(array) which accepts the array as an argument or
// parameter, that performs the addition of the second largest element from the even
// location with the second largest element from an odd location?
// Rules:
// a. All the array elements are unique.
// b. If the length of the array is 3 or less than 3, then return 0.
// c. If Array is empty then return zero.


#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>arr)
{
    if(arr.size()<=3)
      return 0;
   vector<int>even,odd;
   for(int i=0;i<arr.size();i+=2)
   {
    even.push_back(arr[i]);
   }

    for(int i=1;i<arr.size();i+=2)
   {
    odd.push_back(arr[i]);
   }
   sort(even.begin(),even.end());

   sort(odd.begin(),odd.end());
int sum=even[even.size()-2]+odd[odd.size()-2];
    return sum;

}


int main()
{
    vector<int>arr;
    int n,x;
    cout<<"enter the size array"<<"/n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    cout<<solve(arr)<<"\n";
    return 0;
}
