a. #include <stdio.h>

void printNto1(int n) {
    if(n == 0)        
        return;

    printf("%d", n);    //bottom up method 

    if(n > 1)
        printf(" ");   

    printNto1(n - 1);   
}

int main() {
    int n;
    scanf("%d", &n);
    printNto1(n);
    return 0;
}

b. #include <stdio.h>

void printNto1(int n, int i) {
if (i > n)
return;

printNto1(n, i + 1);  
   
if (i < n)  
    printf(" ");  //top down 
  
printf("%d", i);

}

int main() {
int n;
scanf("%d", &n);
printNto1(n, 1);
return 0;
}
