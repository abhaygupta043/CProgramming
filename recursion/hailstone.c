#include<stdio.h>
void hail(int n,int x);
int main(){
    int n,x;
    printf("enter the no. of which you want hailstone sequence:");
    scanf("%d",&n);
    printf("enter the no. of terms upto which you want hailstone sequence:");
    scanf("%d",&x);
    hail(n,x);
    return 0;
}
void hail(int n,int x){
    if(x==0) return ;
    if(n%2==0){
        n=n/2;
        printf("%d ",n);
    }
    else if(n%2!=0){
        n=n*3+1;
        printf("%d ",n);
    }
    hail(n,x-1);
    return ;
}