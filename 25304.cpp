#include<stdio.h>
int main(){
    int m,n,i,m1,n1,sum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&m1,&n1);
        sum += m1*n1;
    }
    if(sum == m) printf("Yes");
    else printf("No");
}