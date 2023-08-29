#include<stdio.h>
int main(){
    /*find differnce btw the sum of elements at even 
    indices to the sum of elements at odd indices */
    int n,sumodd=0,sumeven=0,diff;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0) sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    diff=sumeven-sumodd;
    printf("your answer is :%d",diff);
    return 0;
}