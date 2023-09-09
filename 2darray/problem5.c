#include<stdio.h>
int main(){
   /*print the element of matrix in the given formate
   1 2 3 4
   5 6 7 8
   1 2 3 4 
   print like this:
   1 2 3 4 8 7 6 5 1 2 3 4 */
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of column:");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your required pattern:");
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++) printf("%d ",arr[i][j]);
        }
        else{
            for(int k=n-1;k>=0;k--) printf("%d ",arr[i][k]);
        }
    }
    return 0;
}