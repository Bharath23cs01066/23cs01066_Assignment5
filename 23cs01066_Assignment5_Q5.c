#include<stdio.h>
void main(){
    int i,sum=0;
    char ch;

while(1){
    printf("\n Provide a number:");
    scanf("%d",&i);
    if(i%2==0)
        sum=sum+i;
        printf("\n Do you want to continue:");
        scanf(" %c",&ch);
        switch(ch){
        case 'Y':
        case 'y': continue;
        case 'n':
        case 'N': printf("\n Sum is %d",sum);
        return;
        default : printf("\n Wrong input");
    }
}
}