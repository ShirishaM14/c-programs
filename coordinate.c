#include<stdio.h>
int main(){
    int x1,x2,y1,y2,d;

    printf("enter any 2 coordinates:");
    scanf("%d%d",&x1,&x2);

    printf("\nenter any 2 coordinates:");
    scanf("%d%d",&y1,&y2);

    d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    printf("\nDISTANCE:%d",d);
    return 0;
}