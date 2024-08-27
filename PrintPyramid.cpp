#include<bits/stdc++.h>
using namespace std;

void PrintPyramid(int row,int  col)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
             cout<<"*";
        }
        cout<<endl;
    }
    return ;
}
int main()
{
    int n,m;
    string str;
    do
    {
        cout<<"Enter the row"<<endl;
        cin>>n;
        cout<<"Enter the col"<<endl;
        cin>>m;
        PrintPyramid(n,m);
        cout<<"Do you want to continue (Yes/No)"<<endl;
        cin>>str;

        
    }while(str=="Yes" || str=="yes");

}