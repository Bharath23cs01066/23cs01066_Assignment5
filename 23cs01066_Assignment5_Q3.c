#include<stdio.h>
void main(){
    int n[4],a,b,c,d,i;
    for(i=0;i<4;i++){
        printf("\n Enter digit");
        scanf(" %d",&n[i]);
    }
      for(a=0;a<4;a++){
      for(b=0;b<4;b++){
      for(c=0;c<4;c++){
      for(d=0;d<4;d++){
        printf("\n %d%d%d%d",n[a],n[b],n[c],n[d]);
}
      }
      }
      }
}