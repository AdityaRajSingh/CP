#include <stdlib.h>

unsigned long primeNoGreaterThan(unsigned long N) {
    unsigned long i,j,winner;
    _Bool* primes = (_Bool*) malloc(N*sizeof(_Bool));
    primes[0] = primes[1] = 0;
    for(i = 2; i <= N; ++i) 
        primes[i] = 1;
    for(i = 2; i <= N; ++i) {
        if(primes[i]) {
            winner = i;
            for(j = i+i; j <= N; j += i) 
                primes[j] = 0;
        }
    }
    free(primes);
    return winner;
}
