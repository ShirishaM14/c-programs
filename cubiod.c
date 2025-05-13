#include<stdio.h>
int main(){
    float l,b,h;
    float sa,v;

    printf("\nenter length");
    scanf("%f",&l);
    printf("\nenter breadth");
    scanf("%f",&b);
    printf("\nenter height");
    scanf("%f",&h);

    sa=2*((l*b)+(l*h)+(b*h));
    v=l*b*h;

    printf("\nSURFACE AREA OF CUBIOD IS:%f",sa);
    printf("\nVOLUME OFO CUBIOD IS:%f",v);
    return 0;
}