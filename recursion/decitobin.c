#include<stdio.h>
void bin(int n);
int main(){
    /*code to print the binary coversion of a decimal number ..*/
    int n;
    printf("enter the no. to find its binay :");
    scanf("%d",&n);
    printf("binary coversion of %d is : ",n);
    bin(n);
    return 0;
}
void bin(int n){
    if(n==1){
        printf("%d ",1);
        return ;
    }
    else if(n==0){
        printf("%d",0);
        return;
    }
    bin(n/2);
    printf("%d ",n%2);
    return ;
}