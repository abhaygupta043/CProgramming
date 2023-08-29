#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows: ");
    scanf("%d",&x);
    int y=x;
    for (int i=1;i<=x;i++){
        for(int j=y-1;j>0;j--)
            printf(" ");
        for(int k=1;k<=(i*2-1);k++)
            printf("*");
        printf("\n");
        y--;        
    }
    return 0;
}