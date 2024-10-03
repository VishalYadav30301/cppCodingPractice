// C++ Program to convert decimal to any given base

#include <bits/stdc++.h>
using namespace std;


char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

string fromDecitoanybase(string& res, int base, int inputNum)
{
	
	while (inputNum > 0) {
		res.push_back(reVal(inputNum % base));
		inputNum /= base;
	}

	// Reverse the result
	reverse(res.begin(), res.end());

	return res;
}

// Driver program
int main()
{
	int inputNum = 718, base = 12;
	string res;
	cout << fromDecitoanybase(res, base, inputNum)
		<< endl;

	return 0;
}

