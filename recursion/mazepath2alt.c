#include<stdio.h>
int maze(int x,int y,int m,int n);
int main(){
    /*code to find no. of ways to reach from (x,y) to (m,n)
    provided that one can move either right or down ....*/
    int x,y,m,n;
    printf("enter starting row,column:");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("enter reaching row,column :");
    scanf("%d",&m);
    scanf("%d",&n);
    int ways=maze(x,y,m,n);
    printf("no. of ways : %d",ways);
    return 0;
}
int maze(int x,int y,int m,int n){
    if(x==m||y==n)
        return 1;
    return maze(x+1,y,m,n)+maze(x,y+1,m,n);
}