#include<stdio.h>
int main(){
    int x;
    printf("enter odd no. of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==x/2+1 || j==x/2+1)
                printf("* ");
            else
                printf("  ");
        }
            
        printf("\n");
    }
    return 0;
}