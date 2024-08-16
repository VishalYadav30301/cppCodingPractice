#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string moveHyphentoFront(string str,int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    
    if(str[i]=='-')
    {
        count+=1;
        str.erase(i,1);
    }
    
  }
  while(count--)
  {
    str='-'+str;
  }

 return str;

}




int main()
{
    string x;
    do{
       string str;
       cout<<"Enter any string"<<endl;
       cin>>str;
       int n=str.size();
       string result=moveHyphentoFront(str,n);
       cout<<"The new modified string is ="<<result<<endl;
       cout<<"Do you want to continue"<<"Press (yes/no)"<<endl;
       
       cin>>x;
    }while( x =="yes"|| x=="YES");

    return 0;


}




