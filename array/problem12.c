#include<stdio.h>
int main(){
    /*find unique no. in an array...*/
    int n;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if((arr[i]==arr[j])&&i!=j) flag=1;
        }
        if(flag==0) printf("%d is unique in this array.\n",arr[i]);
    }
    return 0;
}