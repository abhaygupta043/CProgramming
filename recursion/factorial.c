#include<stdio.h>
int factorial(int n){
    if(n==1||n==0) return 1;
    int facto=n*factorial(n-1);
    return facto;
}
int main(){
    int n;
    printf("enter no. of which you want to find the factorial:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial of %d is %d",n,fact);
    return 0;
}