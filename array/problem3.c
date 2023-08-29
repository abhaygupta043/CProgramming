#include<stdio.h>
int main(){
    /*count the number of elements in given array
    greater than a given number x */
    int x,n,count=0;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    printf("enter the no. to find how many element are greater than it :");
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        if(x<arr[i]) count+=1;
    }
    printf("no. of elements greater than x= %d",count);
    return 0;
}