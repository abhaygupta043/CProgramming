#include<stdio.h>
int main(){
    // find sum of all elements of an array...
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n],sum=0;
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum= %d",sum);
    return 0;
}