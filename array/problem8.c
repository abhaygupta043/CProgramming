#include<stdio.h>
int main(){
    /*program to copy the contents of one array into 
    another in the reverse order...*/
    int n;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    int arr2[n],m=0;
    for(int j=n-1;j>=0;j--){
        arr2[m]=arr[j];
        m++;
    }
    printf("1st array : ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n2nd array : ");
    for(int i=0;i<n;i++) printf("%d ",arr2[i]);
    return 0;
}