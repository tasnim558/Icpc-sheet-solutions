#include <stdio.h>
#include <math.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X <= 1) {
        printf("NO\n");
        return 0;
    }

    int isPrime = 1; 
    for (int i = 2; i*i <= X; i++) {
        if (X % i == 0) {
            isPrime = 0; //
            break;
        }
    }

    if (isPrime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
