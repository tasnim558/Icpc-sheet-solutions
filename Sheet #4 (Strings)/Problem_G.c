#include <stdio.h>

int main() {
    char s[100008];
   fgets(s, sizeof(s), stdin);
    
    int i = 0;
    while(s[i] != '\0') {
        
        if(s[i] == ',') {
            s[i] = ' ';                  
        }
        else if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;             
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;             
        }
        
        i++;
    }
    
    printf("%s\n", s);
}
