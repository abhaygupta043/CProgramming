#include<stdio.h>
int main(){
    int n,temp;
    printf("enter size of arr:");
    scanf("%d",&n);
    int arr[n],sum=0;
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) printf("%d",arr[i]);
    printf("\n");
    for(int j=0;j<n/2;j++){
        temp=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=temp;
    }
    for(int i=0;i<n;i++) printf("%d",arr[i]);
    return 0;
}