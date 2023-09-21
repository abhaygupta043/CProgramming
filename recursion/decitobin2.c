#include<stdio.h>
int bin(int n);
int main(){
    /*code to print the binary coversion of a decimal number ..*/
    int n;
    printf("enter the no. to find its binay :");
    scanf("%d",&n);
    int x=bin(n);
    printf("binary coversion of %d is : %d",n,x);
    return 0;
}
int bin(int n){
    static int b;
    if(n==1){
        b=1;
        return b;
    }
    if(n==0){
        b=0;
        return b;
    }
    bin(n/2);
    b=b*10;
    b=b+(n%2);
    return b;
}