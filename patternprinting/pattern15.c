#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows:");
    scanf("%d",&x);
    for(int i=x;i>0;i--){
        for(int k=i-1;k>0;k--)
            printf("  ");
        for(int j=x;j>0;j--)
            printf("* ");
        printf("\n");    
    }
    return 0;
}