#include<stdio.h>
int main(){
    int x;
    printf("enter no.of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if((i+j)<(x+1))
                printf(" ");
            else
                printf("*");    
        }
        printf("\n");
    }
    return 0;
}