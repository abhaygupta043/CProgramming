#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows btw 1 to 9: ");
    scanf("%d",&x);
    int y=x;
    for (int i=1;i<=x;i++){
        int m=0;
        for(int j=y-1;j>0;j--)
            printf(" ");
        for(int k=1;k<=(i*2-1);k++){
            if(k<=i){
                m++;
                printf("%d",m);
            }
            else{
                m--;
                printf("%d",m);
            }
        }
        y--;
        printf("\n");
    }
    return 0;
}