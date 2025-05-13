#include<stdio.h>
int main(){
    int h,r;
    int v,a;

    printf("enter radius for cylinder:");
    scanf("%d",&r);
    printf("\nenter height for cylinder");
    scanf("%d",&h);

    a=2*3.14*r*r;
    v=3.14*r*r*h;


    printf("\nsurface area of cylinder is: %d",a);
    printf("\nvolume of cylinder is: %d",v);  
    return 0;
}