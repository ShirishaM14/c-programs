#include<stdio.h>
int main(){
    int amt;
    printf("\nenter amount:");
    scanf("%d",&amt);
    
    printf("\n10 rs notes are:%d",(amt/10));
    amt=amt%10;

    printf("\n 5 rs notes are:%d",(amt/5));
    amt=amt%5;

    printf("\n 1 rs notes are:%d",(amt));
    return 0;
}