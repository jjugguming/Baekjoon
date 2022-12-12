#include<stdio.h>
int main(){
    int n,num,i;
    int max=-1000000;
    int min=1000000;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        if(num<min) min = num;
        if(num>max) max = num;
    }
    printf("%d %d",min,max);
}