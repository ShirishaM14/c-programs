#include<stdio.h>
int main(){
    float ir,or;
    float p,a;

    printf("\nenter radius for inner ring:");
    scanf("%f",&ir);
    printf("\nenter radius for outer ring:");
    scanf("%f",&or);

    p=2*3.14*(ir+or);
    a=3.14*(ir*ir-or*or);

    printf("\nPERIMETER OF RING IS:%f",p);
    printf("\nAREA OF RING IS:%f",a);
    return 0;
}