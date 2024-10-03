#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int countnumberofcharacters(string str)
{
  int ans=0;
  for(int i=0;i<str.size();i++)
  {
    if((str[i] >='a' &&  str[i]<='z' )|| (str[i]>='A' && str[i]<='Z'))
      ans+=1;

  }
  return ans;
}


int main()
{
    int T;
    cout<<"Enter the number of times you wnat to run this program"<<endl;
    cin>>T;
    int n,num;
    cin.ignore();
    while(T--)
    {
      string str;
       cout<<"Enter the string"<<endl;
       getline(cin,str);
      cout<<countnumberofcharacters(str);
    }
    return 0;
}