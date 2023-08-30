#include<stdio.h>
int main(){
    // find second largest element in an array... 
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
        if(arr[j+1]>maxi) maxi=arr[j+1];
    }
    int smax=arr[0];
    for(int k=0;k<n-1;k++){
        if((arr[k+1]>smax) && arr[k+1]!=maxi) smax=arr[k+1];
    }
    printf("second largest element is :%d",smax);
    return 0;
}