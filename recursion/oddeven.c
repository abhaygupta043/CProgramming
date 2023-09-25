/*code to print odd no. or even no. upto n using recursion...*/
#include<stdio.h>
void even(int n);
void odd(int n);
int main(){
    int n,x;
    printf("to print odd no. press 1/ to print even no. press 2:");
    scanf("%d",&x);
    printf("enter no. upto which you want to print:");
    scanf("%d",&n);
    if(x==1) odd(n);
    else even(n);
    return 0;
}
void even(int n){
    if(n==0) return ;
    even(n-1);
    if(n%2==0) printf("%d ",n);
    return ;
}
void odd(int n){
    if(n==0) return ;
    odd(n-1);
    if(n%2!=0) printf("%d ",n);
    return ;
}