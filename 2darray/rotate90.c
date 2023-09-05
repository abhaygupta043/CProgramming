#include<stdio.h>
int main(){
    /*rotate a nXn matrix 90 degree clockwise ..*/
    int n,temp;
    printf("enter value of n:");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d  ",arr[i][j]);
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            temp=arr[i][j];
            arr[i][j]=arr[i][n-j-1];
            arr[i][n-j-1]=temp;
        }   
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d  ",arr[i][j]);
        printf("\n");
    }
    return 0;
}