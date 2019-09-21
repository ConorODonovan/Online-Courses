#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int prime;
    int primes[100] = {1,2};
    int prime_counter = 2;

    for (i = 3; i < 100; i = i + 2)
    {
        prime = 0;

        for (j = i - 1; j > 1; j--)
        {
            prime = 1;

            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            primes[prime_counter] = i;
            prime_counter += 1;
        }
    }

    int a;

    for (a = 0; a < prime_counter; a++)
    {
        printf("%d ", primes[a]);
    }

    return 0;
}
