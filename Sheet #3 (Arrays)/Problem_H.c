#include<stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int a[n+5];
   for(int i=0; i<n; i++)
   {
       scanf("%d", &a[i]);
   }
   for(int taaha=0; taaha<n-1; taaha++){
          for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            int x = a[i];
            a[i] = a[i+1];
            a[i+1] = x;
        }
   }
   }

   for(int i=0; i<n; i++){
   printf("%d ",a[i]);
}
}
