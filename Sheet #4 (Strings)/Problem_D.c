#include <stdio.h>
#include <string.h>

int main() {
    char A[20], B[20];
    scanf("%s", A);
    scanf("%s", B);
    printf("%zu %zu\n", strlen(A), strlen(B));
    printf("%s%s\n", A,B);
    char A_first = A[0];
    char B_first = B[0];

    A[0] = B_first;
    B[0] = A_first;

    printf("%s %s\n", A, B);

    return 0;
}
