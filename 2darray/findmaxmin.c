#include<stdio.h>
int main(){
    /*find element having maximum and minimum
    value in a 2D array...*/
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
    int ind1,ind2,ind3,ind4;
    int max=arr[0][0],min=arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<=arr[i][j]){
                max=arr[i][j];
                ind1=i;
                ind2=j;
            }
            if(min>=arr[i][j]){
                min=arr[i][j];
                ind3=i;
                ind4=j;
            }
        }
    }
    printf("element having maximum value is %d at index (%d,%d)\n",max,ind1,ind2);
    printf("element having minimum value is %d at index (%d,%d)",min,ind3,ind4);
    return 0;
}