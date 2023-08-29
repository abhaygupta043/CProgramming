#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows;");
    scanf("%d",&x);
    int y=(x*2)-1;
    for(int i=1;i<=y;i=i+2){
        for(int k=1;k<=i;k++){
            printf("%d",k);
            k++;
        }
        printf("\n");

    }
    return 0;
}