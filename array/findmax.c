#include<stdio.h>
int main(){
    // find maximum value in an array... 
    int n;
    printf("enter size of arr:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element");
        scanf("%d",&arr[i]);
    }
    int maxi=arr[0];
    for (int j=0;j<n-1;j++){
        if(arr[j+1]>maxi){
            maxi=arr[j+1];
        }
    }
    printf("max value :%d",maxi);
    return 0;
}