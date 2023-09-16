#include<stdio.h>
void fun(int n,int x){
    printf("%d\n",x);
    if(x==n){
        return ;
    }
    fun(n,x+1);
    return ;
}
int main(){
    /*code to print no. from 1 to n....*/
    int n,x=1;
    printf("enter no. up to which you want to print:");
    scanf("%d",&n);
    fun(n,x);
    return 0;
}