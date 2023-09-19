/*take an array of integers and move all even integers at the 
beginning of the array followed by all the odd integer..*/
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of element you want in array:");
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0;i<n;i++){
        printf("enter element no. %d :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]%2!=0 &&arr[j+1]%2==0){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}