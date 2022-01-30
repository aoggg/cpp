#ifndef FUNCTION11_HEADER
#define FUNCTION11_HEADER

#include <stdio.h>

int factorize(int x, int primes[], int powers[]);

int main() {
    int x, primes[1000], powers[1000];
    scanf("%d", &x);
    int n = factorize(x, primes, powers);
    for (int i = 0; i < n; i++) {
        printf("%d%c", primes[i], " \n"[i+1==n]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d%c", powers[i], " \n"[i+1==n]);
    }
    return 0;
}

#endif  // FUNCTION11_HEADER
