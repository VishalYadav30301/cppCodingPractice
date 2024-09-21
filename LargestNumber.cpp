#include<bits/stdc++.h>
using namespace std;


 bool compareFunction(int a,int b)
    {
         return to_string(a)+to_string(b)>to_string(b)+to_string(a);
           
    }




    string largestNumber(vector<int>& nums) { 
        sort(nums.begin(),nums.end(),compareFunction);
        string ans="";
        for(int i=0;i<nums.size();i++)
        {
            ans+=to_string (nums[i]);
        }
        if(ans[0]=='0')
         return "0";
        return ans;

    }

int main()
{
    int n;
    vector<int>nums;
    cout<<"Enter the size of nums"<<"\n";
    cin>>n;
    cout<<"Enter the array element"<<"\n";
    int temp;
    for(int i=0;i<n;i++)
    {
       cin>>temp;
       nums.push_back(temp);
    }
    string ans=largestNumber(nums);
    for(auto i:ans)
         cout<<i;
    return 0;


}