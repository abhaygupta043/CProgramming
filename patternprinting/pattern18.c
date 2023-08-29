#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows btw 1 to 7: ");
    scanf("%d",&x);
    int y=x;
    for (int i=1;i<=x;i++){
        int m=1;
        for(int j=y-1;j>0;j--)
            printf("    ");
        for(int k=1;k<=(i*2-1);k++){
            printf("%d   ",m);
            m++;
        }    
        printf("\n");
        y--;        
    }
    return 0;
}