#include<stdio.h>
int main(){
    /*give sum of all elements of a 2D array..*/
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of columns:");
    scanf("%d",&n);
    int arr[m][n],sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter value of (%d,%d)",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("sum of all elements : %d",sum);
    return 0;
}