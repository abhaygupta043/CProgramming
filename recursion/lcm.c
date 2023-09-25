#include<stdio.h>
int lcm(int n,int m,int max);
int main(){
    int n,m,max;
    printf("enter 1st and 2nd no.:");
    scanf("%d %d",&n,&m);
    if(n>=m) max=n;
    else max=m;
    int l=lcm(n,m,max);
    printf("lcm=%d",l);
    return 0;
}
int lcm(int n,int m,int max){
    if(max%n==0 && max%m==0) return max;
    int x=lcm(n,m,max+1);
    return x; 
}