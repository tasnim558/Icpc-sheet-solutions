#include <stdio.h>
#include <string.h>

int main() {
    char S[1005];
    scanf("%s", S);
    int len = strlen(S);
    int first = 0;
    int last = len - 1;
    while (first < last) {
        if (S[first] != S[last]) {
            printf("NO\n");
            return 0;  
        }
        first++;
        last--;
    }

    printf("YES\n");  
}
