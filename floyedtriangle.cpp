
#include<bits\stdc++.h>
using namespace std;

void reversefloyd(int n)
{
    int i;
    i= n*(n+1)/2;
while(i>0)
  {
    for(int j=0;j<n;j++)
    {
        cout<<i<<" ";
        i-=1;
    }
    n-=1;
    cout<<"\n";
   
   }
   return ;
}
void starfloyd(int n)
{
    int c=0;
    for(int i=n;i>=1;i--)
    {  
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return ;
}








void floyd(int n)
{
    int c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }
    return ;
}

int main() 
{

    // floyd(5); 
    // reversefloyd(5);
    starfloyd(5);
    return 0;

}
