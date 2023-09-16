#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    int x=n+sum(n-1);
    return x;
}
int main(){
    /*code to print sum of num from 1 to n....*/
    int n;
    printf("enter no. from which you want reverse order:");
    scanf("%d",&n);
    int s=sum(n);
    printf("sum of num. from 1 to %d :%d",n,s);
    return 0;
}