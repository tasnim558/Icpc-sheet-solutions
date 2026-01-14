#include <stdio.h>

int main() {
    char s[1000005];
    
    fgets(s, 1000005, stdin);
    
    int count = 0;
    int in_word = 0;
    
    for(int i = 0; s[i] != '\0'; i++) {
        if( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ) {
            if(in_word == 0) {
                count++;
                in_word = 1;
            }
        }
        else {
            in_word = 0;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
