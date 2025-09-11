#include <stdio.h>
#include <stdbool.h>

// Function to check prime
bool isPrime(int n) {
    int i, count = 0;
    if (n < 2) return false; // handle <2 numbers directly
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    return (count == 2);
}

int main() {
    int n, i, digit = 0, alt = 0;  // alt = counter to skip alternate primes
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (isPrime(i)) {
            alt++;  // increment when prime is found
            if (alt % 2 != 0) { // print only for 1st, 3rd, 5th prime...
                printf("%d ", i);
                digit++;
            }
        }
    }

    printf("\nTotal alternate primes = %d\n", digit);
    return 0;
}

