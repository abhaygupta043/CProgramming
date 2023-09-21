/*code to find largest element of an array..*/
#include<stdio.h>
int great(int arr[],int n);
int main(){
    int n;
    printf("enter no. of element you want in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element no. %d :",i);
        scanf("%d",&arr[i]);
    }
    int large=great(arr,n);
    printf("largest element in the array: %d",large);
    return 0;
}
int great(int arr[],int n){
    int x;
    if(n==1){
        if(arr[n]>arr[n-1]){
            x=arr[n];
        }
        else x=arr[n-1];
        return x;
    }
    x=great(arr,n-1);
    if(x>arr[n-1]) return x;
    else return x=arr[n-1];
    return x;
}