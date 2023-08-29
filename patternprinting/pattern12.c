#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows: ");
    scanf ("%d",&x);
    int m=1;
    for (int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}