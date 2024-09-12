#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long N;
    int prima = 1;
    
    scanf("%lld", &N);
    
    if (N <= 1) {
        printf("BUKAN\n");
        return 0;
    }
    
    if (N == 2 || N == 3) {
        printf("PRIMA\n");
        return 0;
    }
    
    if (N % 2 == 0 || N % 3 == 0) {
        printf("BUKAN\n");
        return 0;
    }
    
    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) {
            prima = 0;
            break;
        }
    }
    
    if (prima) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}