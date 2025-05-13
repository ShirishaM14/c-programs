#include<stdio.h>
int main(){
    float f,c,k;

    printf("enter temperature in fahrenheit:");
    scanf("%f",&f);

    c=(0.5/9)*(f-32);
    k=c+273.15;

     printf("\nCELSIUS:%f",c);
    printf("\nKELVIN:%f",&k);
    return 0;
}