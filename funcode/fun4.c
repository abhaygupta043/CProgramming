/*code to find no. of digits in a number..*/
#include<stdio.h>
int main(){
    int n,digit=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n/10!=0){
        n=n/10;
        digit++;
    }
    printf("n0. of digits =%d",digit);
    return 0;
}