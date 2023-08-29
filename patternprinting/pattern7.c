#include<stdio.h>
int main(){
    int x;
    printf("enter no. of termss:");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        int y=65;
        for (int j=1;j<=x;j++){
            printf("%c",y);
            y++;
        }
        printf("\n");
    }
    return 0;
}