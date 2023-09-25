#include<stdio.h>
int num;
void isprime(int n);
int main(){
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    num=n/2;
    isprime(n);
    return 0;
}
void isprime(int n){
    static int flag=1;
    if(n==0||n==1){
        printf("not prime");
        return ;
    }
    if (n==2){
        printf("it is prime");
        return ;
    }
    if(num==1) return ;
    if(n%num==0){
        flag=0;
    }
    num--;
    isprime(n);
    if(flag==1) printf("it is prime");
    else printf("not prime");
    return ;
}