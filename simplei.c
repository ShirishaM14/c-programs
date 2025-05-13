#include<stdio.h>
#include<math.h>
int main(){
    float amt,p,r,t,SI;
    printf("enter principal ,rate and time:\n");
    scanf("%f%f%f",&p,&r,&t);

    SI=p*r*t;

    printf("\nSIMPLE INTEREST: %f",SI);
    return 0;
}. 