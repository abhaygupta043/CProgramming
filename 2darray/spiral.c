#include<stdio.h>
int main(){
   /*print the elements of a matrix in spiral order..*/

   /*taking input of matrix from user ...*/
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of column:");
    scanf("%d",&n);
    int arr[m][n],q=m,r=n,x=0,y=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter (%d,%d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    /*code for spiral of given matrix....*/
    int k,p=1,l=1,e=1;
    if(m>=n) k=m+n-1;
    else k=m*2-1;
    printf("spiral of given matrix: ");
    for(int i=1;i<=k;i++){
        if(i==5 || i==5+(i-1)*4){
            q-=1;
            r-=1;
        }
        if(i==1+(p-1)*4){
            for(int j=x;j<r;j++) 
                printf("%d ",arr[x][j]);
            p+=1;
        }
        else if(i==2+(l-1)*4){
            for(int j=y;j<q;j++) 
                printf("%d ",arr[j][r-1]);
            l+=1;
        }
        else if(i==3+(e-1)*4){
            for(int j=r-2;j>=x;j--) 
                printf("%d ",arr[q-1][j]);
            e+=1;
        }
        else{
            for(int j=q-2;j>=y;j--) 
                printf("%d ",arr[j][x]);
            x+=1;
            y+=1;
        }
    }
    return 0;
}