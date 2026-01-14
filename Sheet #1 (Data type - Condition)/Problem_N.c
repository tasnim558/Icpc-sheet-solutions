#include <stdio.h>
int main (){
    char X;
    scanf("%c", &X);
    if (X >= 'a' && X <= 'z') {
        char uppercase = X - 32;
        printf("%c\n", uppercase);
    }
     if (X >= 'A' && X <= 'Z') {
        char lowercase = X + 32;
        printf("%c\n", lowercase);
     }
}
