#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int i,int j)
{
   while(i<j)
   {
     if(s[i]!=s[j])
       return false;

    i++;
    j--;
    }
    return true;

}

int main()
{
    string input;
    cin>>input;
    int n=input.length();
    int i;
    for(i=0;i<n;i++)
    {
        if(checkPalindrome(input,i,n-1))
           break;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<input[j];
    }
    return 0;
}