#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows: ");
    scanf("%d",&x);
    int z=x-1;
    for(int i=1;i<=x*2-1;i++)
        printf("%d  ",i);
    printf("\n");
    for(int i=1;i<=x-1;i++){
        int y=1;
        for(int j=z;j>0;j--){
            printf("%d  ",y);
            y++;
        }
        for(int k=1;k<=i*2-1;k++){
            printf("   ");
            y++;
        }    
        for(int j=z;j>0;j--){
            printf("%d  ",y);
            y++;
        }
        printf("\n");
        z--;
    }
    return 0;
}