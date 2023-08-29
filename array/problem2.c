#include<stdio.h>
int main(){
    int n,temp;
    printf("enter size of arr:");
    scanf("%d",&n);
    int arr[n],sum=0;
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    for (int i=0;i<n;i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}