recursion There are two types of solutions.
  top down and bottom up.
  I have tried to solve both types.
(A)
a. #include <stdio.h>
void fun(int n)
{
    if (n == 0)
        return;

    printf("I love Recursion\n");  //bottom up method 
    fun(n - 1);                   
}

int main()
{
    int n;
    scanf("%d", &n);

    fun(n);

    return 0;
}

b. #include <stdio.h>

void function(int n)
{
    if (n == 0)
        return;

    function(n - 1);   //top down method 
    printf("I love Recursion\n");   
}

int main()
{
    int n;
    scanf("%d", &n);

    function(n);

    return 0;
}
