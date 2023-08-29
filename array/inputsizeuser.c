#include<stdio.h>
int main(){
    // take size of array as input from user and  print elements of array...
    int n;
    printf("enter size of arr:");
    scanf("%d",&n);
    int arr[n],sum=0;
    for (int i=0;i<n;i++){
        printf("enter value of element");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}