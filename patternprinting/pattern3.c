#include<stdio.h>
int main(){
    int x;
    printf("enter no.of rows:");
    scanf("%d",&x);
    for(int i=x;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf(":");
        }
        printf("\n");
    }
    return 0;
}