#include<bits/stdc++.h>
using namespace std;

int OperationChoices(int a,int b,int c)
{

    if(c==1)
    {
        return a + b;
    }

    if(c==2)
    {
        return a - b;
    }

    if(c==3)
    {
        return a * b;
    }
    if(c==4)
    {
        return a / b;
    }

}


int main()
{
    int a,b,c;
    string x;
    do{
     
     cout<<"Enter the value of num 1"<<endl;
     cin>>a;
     cout<<"Enter the value of num2"<<endl;
     cin>>b;
     cout<<"Enter the value of num 3 "<<endl;
     cin>>c;

     int result=OperationChoices(a,b,c);  
     cout<<"The output is ="<<result<<endl;
     cout<<"Do you want to continue? Press (yes/no)"<<endl;  
     cin>>x;
    }while(x=="yes" || x=="YES");

    return 0;
}


