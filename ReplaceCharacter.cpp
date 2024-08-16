#include<bits/stdc++.h>
#include<cstring>
#include<iostream>

using namespace std;

void ReplaceCharacter(char str[],char ch1,char ch2,int n)
{
    for(int i=0;i<n;i++)
    {
        if(str[i]==ch1)
        {
            str[i]=ch2;
        }

        else if(str[i]==ch2)
        {
            str[i]=ch1;
        }
    }
    
    cout << "The modified string is="<<str<<endl;
}




int main()
{
    char str[100];
    char ch1;
    char ch2;

    string x;
    do{
    cout<<"Enter any string"<<endl;
    cin>>str;
    cout<<"Enter any character"<<endl;
    cin>>ch1;
    cout<<"Enter any character"<<endl;
    cin>>ch2;
    int l=strlen(str);
    ReplaceCharacter(str,ch1,ch2,l);
    cout<<"Do you want to continue ? Press (yes/no)"<<endl;
    cin>>x;

    }while(x=="YES" || x=="yes");

 return 0;
}
