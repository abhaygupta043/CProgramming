#include<stdio.h>
int main(){
    /*find the total number of pairs in the array whose 
    sum is equal to the given value x */
    int n,x,count=0;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    printf("enter the value of x :");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i!=j && ((arr[i]+arr[j])==x)) count+=1;
        }
    }
    printf("to. no. of pairs whose sum is equal to x : %d",count/2);
    return 0;
}