#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows;");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int a=1;
        for(int k=1;k<=i;k++){
            printf("%d",a);
            a+=2;
        }
        printf("\n");

    }
    return 0;
}