#include <stdio.h>

void factorial(int i, int n, long long multi)
{
    if (i > n) {
        printf("%lld\n", multi);
        return;
    }
    factorial(i + 1, n, multi * i);
}

int main()//bottom up method 
{
    int n;
    scanf("%d", &n);
    factorial(1, n, 1);
    return 0;
}
