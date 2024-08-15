#include<bits/stdc++.h>
#include<iostream>

using namespace std;

        
        int OperationsBinarystring(vector<char>&str) {
            int result = 0;
            int len = str.size();
        
            for (int i = 0; i < len; i++ ) {
                char op = str[i];
                if (op == 'A') {
                    result = result && (str[i+1] - '0');
                } else if (op == 'O') {
                    result = result || (str[i+1] - '0');
                } else if (op == 'X') {
                    result = result ^ (str[i+1] - '0');
                }
            }
        
            return result;
        }
        
        int main() {
            int T;
            int n;
            cout<<"enter the number of times you want to run this code"<<endl;
            cin>>T;
            while(T--)
            {
            cout<<"Enter the size of string"<<endl;
            cin>>n;
            vector<char>ch(n);
            cout<<"Enter the string"<<endl;
            for(int i=0;i<n;i++)
            {
                char c;
                cin>>c;
                ch.push_back(c);
            }
            int output = OperationsBinarystring(ch);
            printf("%d\n", output);

            }
            return 0;
        }