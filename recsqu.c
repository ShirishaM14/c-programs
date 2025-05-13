#include<stdio.h>
int main(){
    int l,b,s;
    int ra,rp,sa;

    printf("enter length and breadth for rectangle:");
    scanf("%d%d",&l,&b);

    ra=l*b;
    rp=(l*l)+(b*b);

    printf("\nAREA OF RECTANGLE IS:%d",ra);
    printf("\nPERIMETER OF RECTANGLE IS:%d",rp);

    printf("\nenter side of square:");
    scanf("%d",&s);

    sa=s*s;

    printf("\nAREA OF SQUARE IS:%d",sa);
    return 0;
}
