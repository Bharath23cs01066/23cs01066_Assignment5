#include<stdio.h>
void main(){
int a,b,i,n;
printf("\n Enter Dividend and divisor");
scanf("%d%d",&a,&b);
for(i=1;i<=(a/b);i++){
    n=a-i*b;
    if(n>=0&&n<b)
    break;
}
printf("\n Quotient is %d",i);
printf("\n Remainder is %d",n);
}