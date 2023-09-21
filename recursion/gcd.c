#include<stdio.h>
void gcd(int x,int y,int g);
int main(){
    int n,m,g;
    printf("enter 1st no. and second no. resp. :");
    scanf("%d %d",&n,&m);
    if(n<m) g=n;
    else g=m;
    gcd(n,m,g);
    return 0;
}
void gcd(int x,int y,int g){
    if(g==1){
        printf("gcd= %d",g);
        return ;
    }
    else if(x%g==0 && y%g==0){
        printf("gcd = %d",g);
        return ;
    }
    else gcd(x,y,g-1);
    return ;
}