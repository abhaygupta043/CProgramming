#include<stdio.h>
int main(){
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}