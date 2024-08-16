#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    float x1,y1,x2,y2,x3,y3;

    cout<<"Enter the x1,y1 :";
    cin>>x1>>y1;
    cout<<"Enter the x2,y2 :";
    cin>>x2>>y2;
    cout<<"Enter the x3,y3 :";
    cin>>x3>>y3;

    float firstDiff  = sqrt(pow (x2-x1,2) + pow(y2-y1,2));
    float secondDiff = sqrt(pow (x3-x2,2) + pow(y3-y2,2));
    float thirdDiff  = sqrt(pow (x3-x1,2) + pow(y3-y1,2));
 
   cout << firstDiff+secondDiff+thirdDiff;

   return 0;

}