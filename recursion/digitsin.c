/*code to find no. of digits in a no. using recursion..*/
#include<stdio.h>
int digits(int n);
int main(){
    int n;
    printf("enter the digit:");
    scanf("%d",&n);
    int d=digits(n);
    printf("no. of digits in no. %d=%d",n,d);
    return 0;
}
int digits(int n){
    if(n/10==0) return 1;
    int x=1+digits(n/10);
    return x;
}