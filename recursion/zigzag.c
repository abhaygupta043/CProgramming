#include<stdio.h>
void zigzag(int n);
int main(){
    /*
    code to print given pattern according to
    value of n:
    111
    211121112
    321112111232111211123
    */
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}
void zigzag(int n){
    if(n==0) return ;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return ;
}