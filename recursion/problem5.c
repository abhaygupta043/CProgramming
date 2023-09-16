#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int x=a*power(a,b-1);
    return x;
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