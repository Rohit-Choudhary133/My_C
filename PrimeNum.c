#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // int p = 0;
    // int i = 0;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime = false;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(int p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (int i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (int i = 0;  i < primeIndex;  ++i )
         printf ("%i  ", primes[i]);

    printf("\n");
    return 0;
}
