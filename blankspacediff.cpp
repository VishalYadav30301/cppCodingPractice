#include<bits/stdc++.h>
using namespace std;

void countblankdiff(string s1,string s2)
{

int x=0,y=0;
for(auto i:s1)
{
    if(i==' ')
    x+=1;
}
for(auto i:s2)
{
    if(i==' ')
    y+=1;
}
int diff=abs(x-y);
if(diff%2==0)
  cout<<"EVEN"<<diff<<"\n";
else
   cout<<"ODD"<<diff<<"\n";

return ;
}


int main()
{
    string s1;
   
    cout<<"enter string s1";
    getline(cin,s1);
    string s2;
    cout<<"enter string s2"<<"\n";
    getline(cin,s2);
    countblankdiff(s1,s2);
    return 0;

}