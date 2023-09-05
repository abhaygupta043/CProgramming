#include<stdio.h>
int main(){
    /*given a matrix 'arr' of dimension m X n and 
    2 coordinates (l1,r1) and (l2,r2). Return the 
    sum of the rectangle from(l1,r1) to (l2,r2)..*/
    int m,n,l1,l2,r1,r2,sum=0;
    printf("enter no. of rows,column resp.:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter 1st coordinate:");
    scanf("%d %d",&l1,&r1);
    printf("enter 2nd coordinate:");
    scanf("%d %d",&l2,&r2);
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++) sum+=arr[i][j];
    }
    printf("sum all elements between given coordinates:%d",sum);
    return 0;
}