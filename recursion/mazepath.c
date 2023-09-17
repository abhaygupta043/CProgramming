#include<stdio.h>
int maze(int m,int n);
int main(){
    /*code to find no. of ways to reach from (1,1) to (m,n)
    provided that one can move either right or down ....*/
    int m,n;
    printf("enter no. of rows and columns resp. :");
    scanf("%d",&m);
    scanf("%d",&n);
    int ways=maze(m,n);
    printf("no. of ways : %d",ways);
    return 0;
}
int maze(int m,int n){
    if(m==1||n==1)
        return 1;
    return maze(m-1,n)+maze(m,n-1);
}