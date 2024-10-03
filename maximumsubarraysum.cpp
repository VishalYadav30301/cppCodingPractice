#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr)

{

    int res = arr[0];
    int sum = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {

        sum = max(sum + arr[i], arr[i]);
        if (sum < 0)
            sum = 0;
        res = max(res, sum);
    }
    return res;
}

int main()
{
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << solve(arr);
    return 0;
}