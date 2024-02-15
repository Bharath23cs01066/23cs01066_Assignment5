#include<stdio.h>

int main(){
    int number,sum=0,bool,i=0,j,digit[10];
    printf("Enter a number : ");
    scanf(" %d",&number);
    do{
        digit[i]=number%10;
        for(j=0,bool=0;j<i;j++){
            if(digit[j]==digit[i]){
                bool = 1;
                break;
            }
            else bool = 0;
        }
        if(bool == 0)
            sum = sum + digit[i];
        i++;
    }
    while((number = number/10)!=0);
    printf("\nno. of digits is %d",i);
    printf("\nsum of all unique digits is %d",sum);
    return 0;
}