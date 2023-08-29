#include<stdio.h>
int main(){
    int x;
    printf("enter no. of termss:");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        int y=65;
        if(i%2==0){
            for(int j=1;j<=i;j++){
                printf("%c",y);
                y++;
            }
        }
        else{
            for(int k=1;k<=i;k++){
                printf("%d",k);
            }
        }
        printf("\n");
    }
    return 0;
}