#include<stdio.h>
void main(){
    int n,i,j;
    printf("\n Enter the size:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++)
            printf(" ");
            for(j=0;j<i;j++) printf("* ");
        printf("\n");
    }
}