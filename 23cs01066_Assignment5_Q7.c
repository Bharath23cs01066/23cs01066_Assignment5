#include<stdio.h>
void main(){
    int i,j,temp,a[10];
    for(i=0;i<10;i++){
        printf("\n Enter element:");
        scanf(" %d",&a[i]);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[i]>=a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
        printf(" %d ",a[i]);
    }
}