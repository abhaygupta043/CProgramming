/*create a struct. -to specify data on students with these 
attributes: roll no., name, department, course, year of joining.
Create 2 structure variables . Now, create afunction to check if
two students have the same department. Pass the two structure 
variable as input to this function...*/


#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[50];
    char dept[20];
    char course[10];
    int yoj;
} student;
void issamedept(student p,student q){
    int i=0,flag=1;
    while(p.dept[i]!='\0'||q.dept[i]!='\0'){
        if(p.dept[i]!=q.dept[i]){
            flag=0;
            break;
        }
        i++;
    }
    if(flag==0) printf("both are from different branch");
    else printf("both are from same branch.");
    return ;
}
int main(){
    student a,b;
    strcpy(a.course,"btech");
    strcpy(a.dept,"cse core");
    strcpy(a.name,"ankit");
    a.roll=2;
    a.yoj=2023;
    strcpy(b.course,"btech");
    strcpy(b.dept,"cse");
    strcpy(b.name,"abhay");
    b.roll=21;
    b.yoj=2023;
    issamedept(a,b);
    return 0;
}