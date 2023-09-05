#include<stdio.h>
int main(){
    /*take 2 matrices by user ,add them
    and print the value...*/
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of columns:");
    scanf("%d",&n);
    int arr1[m][n],arr2[m][n],sum[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter value of (%d,%d)",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter value of (%d,%d)",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) printf("%d  ",sum[i][j]);
        printf("\n");
    }
    return 0;
}