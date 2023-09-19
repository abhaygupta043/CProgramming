#include<stdio.h>
void fun(int n){
    printf("%d\n",n);
    if(n==1){
        return ;
    }
    fun(n-1);
    return ;
}
int main(){
    /*code to print from n to 1 in reverse order...*/
    int n;
    printf("enter no. from which you want reverse order:");
    scanf("%d",&n);
    fun(n);
    return 0;
}