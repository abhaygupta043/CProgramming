#include<stdio.h>
int main(){
    // take students mark from user assuming indentation as roll no. and print roll no. having marks less than 35...  
    int arr[5];
for(int i=0;i<5;i++){
        printf("enter element:");
        scanf("%d",&arr[i]);
}
    for(int i=0;i<5;i++){
        if(arr[i]<35) printf("student of roll no. %d obtained %d marks which is less than 35.\n",i,arr[i]);
    }
    return 0;
}