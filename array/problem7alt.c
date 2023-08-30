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
    int maxi=arr[0],ind;
    for (int j=0;j<n-1;j++){
        if(arr[j+1]>maxi){
            maxi=arr[j+1];
            ind=j+1;
        }
    }
    int temp=arr[ind];
    arr[ind]=arr[n-1];
    arr[n-1]=temp;
    int smaxi=arr[0];
    for (int j=0;j<n-2;j++){
        if(arr[j+1]>smaxi) smaxi=arr[j+1];
    }
    printf("second largest value : %d",smaxi);
    return 0;
}