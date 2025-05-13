#include<stdio.h>
int main(){
    float amt,hr,da,pt,total;

    printf("enter basic salary");
    scanf("%f",&amt);
   
    hr=(amt*10)/100;
    da=(amt*30)/100;
    pt=(amt*5)/100;

    total=amt+hr+da-pt;

    printf("\nbasic salary:%f",amt);
    printf("\nhome rent:%f",hr);
    printf("\ndearance allowance:%f",da);
   printf("\nprofessional tax:%f",pt);
    printf("take home salary:%f",total);

    return 0;
}