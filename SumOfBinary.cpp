#include<bits/stdc++.h>
using namespace std;


int solve(int N)
{
    int ans=0;
    while(N>0)
    {
        ans+=N%2;
        N=N/2;
    }
    return ans;
}

int main()
{
    int N;
     string str;
    do{

    cout<<"enter the value of n"<<"\n";
    cin>>N;
    cout<<solve(N)<<"\n";
    cout<<"Do you want to continue(Yes/No)"<<"\n";
    cin>>str;
    }while(str =="yes"|| str=="Yes");
    return 0;
} 
