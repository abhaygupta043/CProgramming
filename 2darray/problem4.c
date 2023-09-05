#include<stdio.h>
int main(){
    /*find row of a 2D array having sum of elements maximum..*/
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of column:");
    scanf("%d",&n);
    int arr[m][n],maxrow=0,summax;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
            if(summax<sum){
                summax=sum;
                maxrow=i;
            }
        }
    }
    printf("row no. %d has sum=maximum.",maxrow);
    return 0;
}