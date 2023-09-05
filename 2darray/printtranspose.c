#include<stdio.h>
int main(){
    /*print transpose of a matrix
    given by user*/
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of column:");
    scanf("%d",&n);
    int arr[m][n],trans[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) printf("%d  ",arr[i][j]);
        printf("\n");
    }
    printf("transpose of above matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) printf("%d  ",arr[j][i]);
        printf("\n");
    }
    return 0;
}