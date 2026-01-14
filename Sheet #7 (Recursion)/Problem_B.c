a. #include <stdio.h>

void printnumber(int i, int n)
{
    if (i > n)
        return;

    printf("%d\n", i);   
    printnumber(i + 1, n);     // bottom up method 
}

int main()
{
    int n;
    scanf("%d", &n);

    printnumber(1, n);

    return 0;
}

b. #include <stdio.h>

void printnumber(int n)
{
    if (n == 0)
        return;

    printnumber(n - 1);        // top down method 
    printf("%d\n", n);  
}

int main()
{
    int n;
    scanf("%d", &n);

    printnumber(n);

    return 0;
}
