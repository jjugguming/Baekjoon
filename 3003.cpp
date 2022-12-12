#include<stdio.h>
int main(){
   int a[6]={1,1,2,2,2,8},b[6],i;
   for(i=0;i<6;i++){scanf("%d",&b[i]);}
   for(i=0;i<6;i++){printf("%d ",a[i]-b[i]);}
}