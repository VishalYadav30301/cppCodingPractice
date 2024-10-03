
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    else
        return false;
}

string removevovel(string a)
{
    int n = a.length();

    string updatedString = "";

    for (int i = 0; i < n; i++)
    {

        if (i == 0 || i == n - 1)
        {
            updatedString += a[i];
            continue;
        }

        if (isVowel(a[i]) && !isVowel(a[i - 1]) && !isVowel(a[i + 1]))
        {
            continue;
        }

        updatedString += a[i];
    }

    return updatedString;
}

int main()
{

    string str = "vishal";

    string updatedString = removevovel(str);

    cout << updatedString;

    return 0;
}
