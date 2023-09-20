#include<stdio.h>
int digsum(int n);
int main(){
    /*code to find sum of digits of a number..*/
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    int sum=digsum(n);
    printf("sum of digits of the no. =%d",sum);
    return 0;
}
int digsum(int n){
    if(n/10==0) return n%10;
    int x=n%10 + digsum(n/10);
    return x;
}