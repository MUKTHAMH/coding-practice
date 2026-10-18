#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    float cgpa;
    char name[100];
};
int main(){
struct student s1;
s1.rollno=1250;
s1.cgpa=9.0;
strcpy(s1.name,"muktha");
printf("student name is %s\n", s1.name);
printf("student cgpa is %f\n", s1.cgpa);
printf("student rollno is %d\n", s1.rollno);




    return 0;
}