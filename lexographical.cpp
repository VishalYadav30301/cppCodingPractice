// Given 2 strings having both uppercase and lowercase characters. Irrespective of the case,
// determine the lexicographically smaller string return -1 if the first string is smaller return 1 if
// the second string is smaller and 0 if both are equal.




#include<bits/stdc++.h>
using namespace std;


int solve(string s1,string s2)
{

  int n,m;
  n=s1.size();
  m=s2.size();
  if(n==0 && m==0)
   return 0;
  
  int size=n>m?n:m; 
  for(int i=0;i<size;i++)
  {
    int a=(s1[i]-'0');
    int b=(s2[i]-'0');
    if(a<b)
       return -1;
    if(b<a)
       return 1;
  }
  if(n==m)
    return 0;
    
}








int main()
{
    string x;
    do{
        string s1,s2;
        cout<<"Enter string one"<<"\n";
        cin>>s1;
        cout<<"Enter string two"<<"\n";
        cin>>s2;
        cout<<solve(s1,s2)<<"\n";
        
        cout<<"Do you wnat to continue"<<"\n";
        cin>>x;
    }while(x=="yes"|| x=="Yes");
    return 0;
}