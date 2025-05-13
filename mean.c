#include<stdio.h>
int main(){
    float a,b;
    float AM,HM;
    printf("enter 2 numbers:");
    scanf("%f",&a);
    scanf("%f",&b);

    AM=(a+b)/2;
    HM=(a*b)/(a+b);

    printf("\nARITHETIC MEAN :%f",AM);
    printf("\nHARMONIC MEAN:%f",HM);
    return 0;
}