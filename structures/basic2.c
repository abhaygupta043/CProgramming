#include<stdio.h>
int main(){
    /*create a structure type 'person' with name, salary
    and age as its attributes. Print the name of first 
    person and age of the other..*/
    struct person{
        char name[50];
        float salary;
        int age;
    }a,b;
    strcpy(a.name,"abhay");
    a.salary=1200000;
    a.age=23;
    printf("name=%s\n",a.name);
    printf("salary=%f\n",a.salary);
    printf("age=%d",a.age);
    return 0;
}