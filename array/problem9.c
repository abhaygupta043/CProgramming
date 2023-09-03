#include<stdio.h>
int main(){
    /*rotate array 'a' by k steps, where k is */
    int n,k;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    printf("enter the no. of times you want to rotate: ");
    scanf("%d",&k);
    if(k>=n) k=k%n;
    for(int i=1;i<=k;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("your array after rotating %d times :",k);
    for(int k=0;k<n;k++) printf("%d ",arr[k]);
        printf("\n");
    return 0;
}