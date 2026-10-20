#include<stdio.h>
#include<string.h>
struct student{
        int rollno;
        float cgpa;
        char name[100];
    };
    void printinfo(struct student s1);

int main(){
struct student s1={1250, 9.0,"muktha"};
printinfo(s1);
// struct student *ptr = &s1;
// printf("student rollno %d\n", ptr->rollno);
// printf("student  cgpa %f\n", ptr->cgpa);
// printf("student name %s\n", ptr->name);

    
    return 0;
}
void printinfo(struct student s1){
printf("student information:\n");
printf("student rollno %d\n", s1.rollno);
printf("student cgpa %f\n", s1.cgpa);
printf("student name %s\n", s1.name);
}