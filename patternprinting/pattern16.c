#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows:");
    scanf("%d",&x);
    int n=1;
    for(int i=x;i>0;i--){
        int m=65;
        for(int k=i-1;k>0;k--)
            printf(" ");
        for(int j=1;j<=n;j++){
            printf("%c",m);
            m++;
        }
        n++;
        printf("\n");    
    }
    return 0;
}