#include<stdio.h>
int main(){
    int n,m,max;
    printf("enter 1st and 2nd no.:");
    scanf("%d %d",&n,&m);
    if(n>=m) max=n;
    else max=m;
    for(int i=max;i<=m*n;i++){
        if(i%n==0 && i%m==0){
            printf("lcm of %d ,%d=%d",n,m,i);
            break;
        }
    }
    return 0;
}