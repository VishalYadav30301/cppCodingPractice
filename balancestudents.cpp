#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>std)
{
   unordered_map<int,int>mp;
   for(int i=0;i<std.size();i++)
   {
    mp[std[i]]+=1;
   }
   int size=mp.size();
   return std.size()-size;

}

int main()
{
 vector<int>arr={90,80,90,80,80,90,70};   
 cout<<solve(arr);
 return 0;
}