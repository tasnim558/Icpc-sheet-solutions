#include <stdio.h>
 
int main() {
    int X;
 
    while (1) {
        scanf("%d", &X);
 
        if (X == 1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
}
