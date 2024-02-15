#include<stdio.h>
void main(){
    char c[10],w[10];
    int i,j;
    printf("\n Enter letters");
    gets(c);
    printf("\n Enter word");
    gets(w);
    for(i=0;w[i]!='\0';i++){
        for(j=0;c[j]!='\0';j++){
            if(w[i]!=c[j]){
                printf("\n Word can't be formed");
                return;
            }
    else printf("\n Word can be formed");
    return;
        }
    }
}