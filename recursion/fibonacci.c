#include<stdio.h>
int fibo(int n){
    if(n==1||n==2) return 1;
    int x=fibo(n-1)+fibo(n-2);
    return x;
}
int main(){
    /*code to print nth term of a fibo series..*/
    int n;
    printf("enter nth term :");
    scanf("%d",&n);
    printf("nth element element of fibonacci series : ");
    printf("%d",fibo(n));
    return 0;
}