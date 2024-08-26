#include<bits/stdc++.h>
using namespace std;

int CutTheCake(int cuts)
{
 if(cuts==0)
   return 1;
 if(cuts==1)
   return 2;

 int ans=0;
 ans=(cuts*(cuts+1)/2 +1)%1000000007;
 return ans;

}


int main()
{
    int cuts;
    string str;
    do
    {
        cout<<"Enter the no of cuts"<<endl;
        cin>>cuts;
        cout<<CutTheCake(cuts)<<endl;
        cout<<"Do you want to continue (Yes/No)";
        
        cin>>str;

    }while( str =="Yes" || str =="yes");

    return 0;
} 