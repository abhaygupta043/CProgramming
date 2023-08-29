#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows: ");
    scanf("%d",&x);
    int y=x/2;
    for(int i=1;i<=x/2+1;i++){
        for(int j=y;j>0;j--)
            printf("  ");
        for(int k=1;k<=i*2-1;k++)
            printf("* ");    
        y--;
        printf("\n");    
    }
    int z=x/2;
    for(int i=1;i<=x/2;i++){
        for(int j=1;j<=i;j++)
            printf("  ");
        for(int k=1;k<=z*2-1;k++)
            printf("* ");
            z--;
        printf("\n");    
    }
    return 0;
}