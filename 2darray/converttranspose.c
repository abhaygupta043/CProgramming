#include<stdio.h>
int main(){
    /*convert a matrix of order nXn to its 
    transpose without creating another array ..*/
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
    printf("transpose:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d  ",arr[i][j]);
        printf("\n");
    }
    return 0;
}