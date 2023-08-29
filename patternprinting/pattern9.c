#include<stdio.h>
int main(){
    int x;
    printf("enter odd no of rows:");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        if(i!=(x/2+1)){
            for (int j=1;j<=x;j++){
                if(j!=(x/2+1)){
                    printf(" ");
                }
                else if(j==(x/2+1)){
                    printf("*");
                }   
            }
        }
        else if(i==(x/2+1)){
            for (int k=1;k<=x;k++){
                printf("*");
            }
        }
        printf("\n");

    }
    return 0;
}