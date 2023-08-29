#include<stdio.h>
int main(){
    int x;
    printf("enter no. rows: ");
    scanf("%d",&x);
    int y=x-1;
    for(int i=1;i<=x*2-1;i++)
        printf("* ");
    printf("\n");
    for(int i=1;i<=x-1;i++){
        for(int j=y;j>0;j--)
            printf("* ");
        for(int k=1;k<=i*2-1;k++)
            printf("  ");
        for(int j=y;j>0;j--)
            printf("* ");
        y--;
        printf("\n");
    }
    return 0;
}
