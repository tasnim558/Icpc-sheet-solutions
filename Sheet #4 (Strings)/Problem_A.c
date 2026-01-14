#include <stdio.h>
#include <string.h>
int main(){
    char S[1100], T[1100];
    scanf("%s", S);
    scanf("%s", T);
    printf("%zu %zu\n", strlen(S), strlen(T));
    printf("%s %s\n", S, T);
}
