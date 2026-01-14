#include <stdio.h>
 int main() {
    int T;
    scanf("%d", &T);
 
    for (int t = 0; t < T; t++) {
        int N;
        long long fact = 1;
        scanf("%d", &N);
 
        for (int i = 1; i <= N; i++) {
            fact *= i;
        }
 
        printf("%llu\n", fact);
    }
 }
