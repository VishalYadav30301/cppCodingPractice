#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int>nums)
// {   
//     unordered_map<int,int>mp;
//     for(int i=0;i<nums.size();i++)
//     {
//       mp[nums[i]]+=1;
//     }
//     int i=0;
//     for( ;i<nums.size();i++)
//     {
//         if(mp.find(i)==mp.end())
//            return i;
//     }
//     return -1;
// }



int solve(auto nums)
{
    int n= *max_element(nums.begin(),nums.end());
    int sum=n*(n+1)/2;
    int res=accumulate(nums.begin(),nums.end(),0);
    return sum-res;
}

int main()
{
    vector<int>nums={3,1,0};
    cout<<solve(nums)<<endl;
    return 0;
}