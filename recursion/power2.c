#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    if(b==1) return 2;
    else if(b%2==0)
        return power(a,b/2)*power(a,b/2);
    else return power(a,b/2)*power(a,b/2+1);
}
int main(){
    /*code to find a^b using recursion..*/
    int a,b;
    printf("enter base :");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    int x=power(a,b);
    printf("%d^%d =%d",a,b,x);
    return 0;
}