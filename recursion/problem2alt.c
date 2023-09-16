#include<stdio.h>
void fun(int n){
    if(n==0) return ;
    fun(n-1);
    printf("%d\n",n);
    return ;
}
int main(){
    /*code to print no. from 1 to n....*/
    int n;
    printf("enter no. up to which you want to print:");
    scanf("%d",&n);
    fun(n);
    return 0;
}