// Program to find the amount of water in j-th glass
// of i-th row
#include<bits/stdc++.h>
using namespace std;


// Returns the amount of water in jth glass of ith row
float findWater(int i, int j, float X)
{

	// There will be i*(i+1)/2 glasses till ith row 
	// (including ith row)
    vector<float>glass(i*(i+1)/2,0);

	int index = 0;
	glass[index] = X;

	// Now let the water flow to the downward glasses 
	// till the row number is less than or/ equal to i (given row) 
	// correction : X can be zero for side glasses as they have lower rate to fill

	for (int row = 1; row <= i ; ++row)
	{
		// Fill glasses in a given row. Number of 
		// columns in a row is equal to row number
		for (int col = 1; col <= row; ++col, ++index)
		{
			// Get the water from current glass
			X = glass[index];

			// Keep the amount less than or equal to
			// capacity in current glass
			glass[index] = (X >= 1.0f) ? 1.0f : X;

			// Get the remaining amount
			X = (X >= 1.0f) ? (X - 1) : 0.0f;

			// Distribute the remaining amount to 
			// the down two glasses
			glass[index + row] += X / 2;
			glass[index + row + 1] += X / 2;
		}
	}

	return glass[i*(i-1)/2 + j - 1];
}

int main()
{
	int i = 2, j = 2;
	float X = 2.0; // Total amount of water

	printf("Amount of water in jth glass of ith row is: %f",
			findWater(i, j, X));

	return 0;
}
