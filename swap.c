#include<stdio.h>
int main(){
    int a,b,t;
    printf("enter 2 numbers:");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("\nbefore swapping:");
    printf("\nfirst number :%d",a);
    printf("\nsecond number :%d",b);

   /* t=a;
    a=b;
    b=t; 
   */

   a=a+b;
   b=a-b;
   a=a-b;

    printf("\nafter swapping:");
    printf("\nfirst number :%d",a);
    printf("\nsecond number :%d",b);
    return 0;
}