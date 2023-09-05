#include<stdio.h>
int main(){
    /*program to store roll no. and marks obtained
    by students side by side in a matrix print matrix*/
    int m,n;
    printf("enter no.of students:");
    scanf("%d",&m);
    printf("enter no. of subjects");
    scanf("%d",&n);
    int arr[m][n+1];
    for(int i=0;i<m;i++){
        for(int j=0;j<=n;j++){
            if(j==0){
                printf("enter roll no. :");
                scanf("%d",&arr[i][j]);
            }
            else{
                printf("enter marks: ");
                scanf("%d",&arr[i][j]);
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=n;j++) printf("%d  ",arr[i][j]);
        printf("\n");
    }
    return 0;
}