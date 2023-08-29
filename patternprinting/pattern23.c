#include<stdio.h>
int main(){
    int x;
    printf("enter no. of rows: ");
    scanf("%d",&x);
    int z=x-1,w=65;
    for(int i=1;i<=x*2-1;i++){    
        printf("%c  ",w);
        w++;
    }
    printf("\n");
    for(int i=1;i<=x-1;i++){
        int y=65;
        for(int j=z;j>0;j--){
            printf("%c  ",y);
            y++;
        }
        for(int k=1;k<=i*2-1;k++){
            printf("   ");
            y++;
        }    
        for(int j=z;j>0;j--){
            printf("%c  ",y);
            y++;
        }
        printf("\n");
        z--;
    }
    return 0;
}