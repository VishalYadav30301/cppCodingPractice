#include <stdio.h> // Including standard input-output library
#include <math.h> // Including math library for pow function
#include <stdlib.h> // Including standard library for exit function

// Function to calculate the maximum product after breaking the integer
int integer_Break(int n) {
    if (n == 2) { // If n is equal to 2
        return 1; // Return 1 as maximum product
    } else if (n == 3) { // If n is equal to 3
        return 2; // Return 2 as maximum product
    } else if (n % 3 == 0) { // If n is divisible by 3
        return (int) pow(3, n / 3); // Calculate maximum product using pow function
    } else if (n % 3 == 1) { // If n leaves remainder 1 when divided by 3
        return 2 * 2 * (int) pow(3, (n - 4) / 3); // Calculate maximum product
    } else { // If n leaves remainder 2 when divided by 3
        return 2 * (int) pow(3, n / 3); // Calculate maximum product
    }
}

// Main function

int main(void)
{
    int n = 12; // Declare and initialize integer variable n with value 12
    printf("\nMaximum product of %d after breaking the integer %d ", n, integer_Break(n)); // Print the maximum product
    n = 7; // Assign value 7 to n
    printf("\nMaximum product of %d after breaking the integer %d ", n, integer_Break(n)); // Print the maximum product
    return 0; // Return 0 to indicate successful termination
}

