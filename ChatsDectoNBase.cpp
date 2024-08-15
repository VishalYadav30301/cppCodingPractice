#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string ChatsDectoNBase( int n,int num)
{
 unordered_map<int,string>mp;

 for (int i = 0; i <= 35; ++i) {
        if (i < 10) {
            mp[i] = to_string(i);
        } else {
            mp[i] = static_cast<char>('A' + i - 10);
        }
    }
    int quotient;
    int rem;
    string res;

    while(num)
    {
      rem=num%n;
      res=mp[rem]+res;
      num=num/n;
    }
     return res;


}


int main()
{
    int T;
    cout<<"Enter the number of times you wnat to run this program"<<endl;
    cin>>T;
    int n,num;
    while(T--)
    {
      cout<<"Enter the N base"<<endl;
      cin>>n;
      cout<<"Enter the value of num"<<endl;
      cin>>num;
      string result;
      result+=ChatsDectoNBase(n,num);
      cout<<"Encoded string is="<<result<<endl;
    }
    return 0;
}