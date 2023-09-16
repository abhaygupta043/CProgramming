#include<stdio.h>
 int stair(int n);
 int main(){
    /*code to find no. of ways aone can climb a stair
    provided he could climb eithire  1 or 2 or 3 stair 
    in one step */
    int n;
    printf("enter no. of stair:");
    scanf("%d",&n);
    int x=stair(n);
    printf("no. of way= %d",x);
    return 0;
 }
 int stair(int n){
    if (n==2||n==1) return n;
    if(n==3) return 4;
    int x=stair(n-1)+stair(n-2)+stair(n-3);
    return x;
 }