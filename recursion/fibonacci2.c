#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("enter no. of terms upto which you want fibonacci series :");
    scanf("%d",&n);
    printf("fibonacci of %d terms is: ",n);
    for (int i=1;i<=n;i++){
        int f=fibo(i);
        printf("%d  ",f);
    }
    return 0;
}
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}