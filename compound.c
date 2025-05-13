#include<stdio.h>
#include<math.h>
int main(){
    float amt,p,r,t,CI;
    printf("enter principal ,rate and time:\n");
    scanf("%f%f%f",&p,&r,&t);

    amt=p *((pow((1 + r / 100), t)));
    CI = amt - p;

    printf("\nCOMPOUND INTEREST: %f",CI);
    return 0;
}