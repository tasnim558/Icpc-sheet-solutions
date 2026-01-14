
#include <stdio.h>
#include <math.h>
int main(){
    long long int a, b, c, p, q, r, temp;
    scanf("%lld %lld %lld", &a, &b, &c);
    p=a;
    q=b;
    r=c;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
     if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
     if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    printf("%lld\n%lld\n%lld\n\n", a, b, c);
    printf("%lld\n%lld\n%lld\n", p, q, r);
     return 0;
}


