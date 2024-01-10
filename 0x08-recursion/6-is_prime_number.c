#include "main.h"

int helper_prime(int n, int i, int limit)
{
    if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
        return (0);
    else if (n % i != 0 && i <= limit)
        return (helper_prime(n, i + 1, limit));
    else
        return (1);
}

int is_prime_number(int n)
{
    return (helper_prime(n, 2, n / 2));
}
