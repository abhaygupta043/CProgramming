#include<stdio.h>
int main(){
    int x;
    printf("enter no. up to which you want pattern: ");
    scanf("%d",&x);
    int m=x;
    for(int i=1;i<=x;i++){
        int y=x;
        for(int j=1;j<i;j++){
            printf("%d ",y);
            y--;
        }
        for(int k=1;k<=m*2-1;k++){
            printf("%d ",m);
        }
        for(int j=x-i+2;j<=x;j++){
            printf("%d ",j);
        }
        printf("\n");
        m--;
    }
    int n=2;
    for(int i=1;i<=x-1;i++){
        for(int j=x;j>i;j--)
            printf("%d ",j);
        for(int k=1;k<=i*2-1;k++)
            printf("%d ",n);
        for(int l=n;l<=x;l++)
            printf("%d ",l);
        
        n++;
        printf("\n");
        
    }
    return 0;
}