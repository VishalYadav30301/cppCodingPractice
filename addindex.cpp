// Question 1: = int n=5
//  int arr [] (2,5,6,8,9)
//  if even index even number add++
//  if odd index odd number add++
//  print add


#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((i % 2 == 0 && arr[i] % 2 == 0) || (i % 2 != 0 && arr[i] % 2 != 0))
            ans += arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr(10);
    cout << "Enter the array elements" << "\n";
    int x;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    int res = solve(arr);
    cout << res;
    return 0;
}