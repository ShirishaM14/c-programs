#include<stdio.h>
int main(){
    int r;
    printf("enter radius of circle");
    scanf("%d",&r);

    int a,c;
    a=3.14*r*r;
    c=2*3.14*r;

    printf("\nAREA OF CIRCLE IS :%d",a);
    printf("\nCIRCUMFERENCE OF CIRCLE:%d",c);
    return 0;
}