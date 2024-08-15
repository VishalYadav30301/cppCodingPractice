#include<bits/stdc++.h>
using namespace std;
int NumberOfCarry(int num1,int num2){

     if(!num1 || !num2)
          return 0;
int r1,r2;
int ans=0;
int sum=0;
int carry=0;
    while(num1 || num2 )
{
        r1=num1%10;
        r2=num2%10;

        carry= (r1+r2+carry)/10;
        if(carry>0)
         ans+=1;
        num1=num1/10;
        num2=num2/10;
 
}
return ans;
}
int main()
{
    int T,num1,num2,res;
    cout<<"Enter the number of times you want to run this code"<<endl;
    cin>>T;
    while(T--)
    {
        cout<<"Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        if(num1<0 ||num2<0)
         {
            cout<<"The given number should be positive integer"<<endl;
            return 0;
         }

        res=NumberOfCarry(num1,num2);
        cout<<"The Output is="<<res<<endl;
    }
    return 0;
}