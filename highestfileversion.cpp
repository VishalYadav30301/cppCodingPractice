#include<bits/stdc++.h>
using namespace std;

void solve(vector<string>&file)
{
int max=INT_MIN;
for(auto i:file)
{   int val; 
    string num="";
    for(int j=0;j<i.size();j++)
    {
        if(i[j]=='_')
        {
            while(j!=i.size())
              {num+=i[j+1];
               j+=1;}
        }
    }
    val=stoi(num);
    if(val>max)
    max=val;
    
}
cout<< max<<"\n";
return ;
}

int main()
{
    vector<string>file={"File_5","File_10","File_300"};
    solve(file);
    return 0;
    


}