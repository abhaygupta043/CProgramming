#include<stdio.h>
int main(){
    /*print multiplication of two matrices
    given by the user...*/
    int m,n,k;
    printf("enter no. of rows for 1st matrix:");
    scanf("%d",&m);
    printf("enter no. of column for 1st matrix or no.of rows for second matrix:");
    scanf("%d",&n);
    printf("enter no. of columns for 2nd matrix:");
    scanf("%d",&k);
    int arr1[m][n],arr2[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("multiplication of two matrices :")
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            int elem=0;
            for(int l=0;l<n;l++){
                elem+=arr1[i][l]*arr2[l][j];
            }
            printf("%d ",elem);
        }
        printf("\n");
    }
    return 0;
}