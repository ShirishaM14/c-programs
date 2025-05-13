#include<stdio.h>
int main(){
    float u,a,t;
    float v,s;
    printf("enter velocity");
    scanf("%f",&u);
    printf("\nenter acceleration");
    scanf("%f",&a);
    printf("\nenter time");
    scanf("%f",&t);

    v=u+(a*t);
    s=u+(a*t)*(a*t);

    printf("\nFINAL VELOCITY :%f",v);
    printf("\nDISTANCE:%f",s);
    return 0;
}