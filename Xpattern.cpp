#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(i+j== 10 || i==j)
            {
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}