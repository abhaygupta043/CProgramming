#include<stdio.h>
int main(){
    /*find a duplicate element from an array...*/
    int n;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j]){
            printf("%d has a duplicate at index %d",arr[i],j);
            break;
          } 
        }
    }
    return 0;
}