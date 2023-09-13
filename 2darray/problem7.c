#include<stdio.h>
int main(){
    /*generate a nXn matrix filled with elements
      in spiral order....*/
    int n,m=1;
    printf("enter value of n:");
    scanf("%d",&n);
    int arr[n][n],r=n,x=0,y=1;
    int k=2*n-1,p=1,l=1,e=1;
    for(int i=1;i<=k;i++){
        if(i==5 || i==5+(i-1)*4) r-=1;
        if(i==1+(p-1)*4){
            for(int j=x;j<r;j++){
                arr[x][j]=m;
                m+=1;
            }
            p+=1;
        }
        else if(i==2+(l-1)*4){
            for(int j=y;j<r;j++){
                arr[j][r-1]=m;
                m+=1;
            }
            l+=1;
        }
        else if(i==3+(e-1)*4){
            for(int j=r-2;j>=x;j--){
                arr[r-1][j]=m;
                m+=1;
            }
            e+=1;
        }
        else{
            for(int j=r-2;j>=y;j--){
                arr[j][x]=m;
                m+=1;
            }
            x+=1;
            y+=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d  ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
