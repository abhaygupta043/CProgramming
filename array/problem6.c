#include<stdio.h>
int main(){
    /*count the number of triplets whose sum is equal 
    to the given value x*/
    int n,x,count=0;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    printf("enter the value of x : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if((i!=j)&&(i!=k)&&(j!=k)&&(arr[i]+arr[j]+arr[k]==x)) count+=1;
            }
        }
    }
    printf("to. no. of triplets whose sum is equal to x : %d",count/6);
    return 0;
}