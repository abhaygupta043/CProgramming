/*code to print elements of array using recursion...*/
#include<stdio.h>
void print(int arr[],int n);
int main(){
    int n;
    printf("enter no. of element you want to put in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element no. %d :",i);
        scanf("%d",&arr[i]);
    }
    print(arr,n);
    return 0;
}
void print(int arr[],int n){
    if(n==0) return ;
    print(arr,n-1);
    printf("%d ",arr[n-1]);
    return ;
}