#include<stdio.h>
int main(){
    int n,m;
    printf("enter no. of rows: ");
    scanf("%d",&n);//n=number of rows
    printf("enter no. of columns: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for (int j=1;j<=m;j++){
                printf("*");
            }
        }
        else{
            for(int k=1;k<=m;k++){
                if(k==1||k==m)
                    printf("*");
                else
                    printf(" ");                    
            }
        }
        printf("\n");
    }
    return 0;
}