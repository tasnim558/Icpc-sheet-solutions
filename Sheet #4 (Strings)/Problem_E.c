#include <stdio.h>
#include <string.h>

int main() {
    char S[1000005];
    scanf("%s", S);

    long long sum = 0;

    for (int i = 0; S[i] != '\0'; i++) {
        sum += S[i] - '0';  
    }

    printf("%lld\n", sum);

    return 0;
}
