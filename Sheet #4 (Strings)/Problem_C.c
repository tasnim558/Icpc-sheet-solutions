#include <stdio.h>
#include <string.h>

int main() {
    char X[26], Y[26];

    scanf("%s %s", X, Y);

    int cmp = strcmp(X, Y);

    if (cmp <= 0)
        printf("%s\n", X);
    else
        printf("%s\n", Y);

    return 0;
}
