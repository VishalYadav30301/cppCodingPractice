#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


bool Checkpassword(string str)
{
   int n=str.size();
   if(n<4)
   return false;
   if(isdigit(str[0]))
    return false;

 int digit=0;
 int capital=0;


   for(int i=0;i<n;i++)
   {
     if(isdigit(str[i]))
       digit+=1;
     if(isupper(str[i]))
       capital+=1;
     if(isspace(str[i]) || str[i] == '/')
      return false;
   }

   if(digit<1)
   return false;
   if(capital<1)
    return false;
  return true;
}

int main() {
    int n;
    string str;
    string s;
    
    do {
        cout << "Enter the size of input" << endl;
        cin >> n;
        
        cout << "Enter the password" << endl;
        cin >> str;
        
        bool result = Checkpassword(str);
        
        if (result == true) {
            cout << "The password strength is good" << endl;
        } else {
            cout << "The password strength is not good" << endl;
        }
        
        cout << "Do you want to check it again? (yes/no)" << endl;
        cin >> s;
    } while (s == "yes" || s == "YES");

    return 0;
}