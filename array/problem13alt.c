/*take an array of integers and move all even integers at the 
beginning of the array followed by all the odd integer..*/
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of element you want in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element no. %d :",i);
        scanf("%d",&arr[i]);
    }
    int left=0,right=n-1,temp;
    while(left<right){
        if(arr[left]%2!=0 && arr[right]%2==0){
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        else if(arr[left]%2==0 && arr[right]%2!=0){
            left++;
            right--;
        }
        else if(arr[left]%2==0 && arr[right]%2==0){
            left++;
        }
        else right--;
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}