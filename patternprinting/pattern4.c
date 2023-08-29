#include<stdio.h>
int main(){
    int x;;
    printf("enter no. of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");     
    }
    return 0;

}