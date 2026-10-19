#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    float cgpa;
    char name[100];
};
int main(){
// struct student s1;
// s1.rollno=1250;
// s1.cgpa=9.0;
// strcpy(s1.name,"muktha");
// printf("student name is %s\n", s1.name);
// printf("student cgpa is %f\n", s1.cgpa);
// printf("student rollno is %d\n", s1.rollno);
// struct student s2;
// s2.rollno=1253;
// s2.cgpa=9.8;
// strcpy(s2.name,"yogu");
// printf("student name is %s\n", s2.name);
// printf("student cgpa is %f\n", s2.cgpa);
// printf("student rollno is %d\n", s2.rollno);
// struct student s3;
// s3.rollno=1251;
// s3.cgpa=9.9;
// strcpy(s3.name,"goutham");
// printf("student name is %s\n", s3.name);
// printf("student cgpa is %f\n", s3.cgpa);
// printf("student rollno is %d\n", s3.rollno);
// struct student cse[100];
// cse[0].rollno=1250;
// cse[0].cgpa=9.0;
// strcpy(cse[0].name,"muktha");
// printf("name=%s\n",cse[0].name);
struct student s1={1250,9.0,"muktha"};
printf("rollno is %d\n",s1.rollno);
struct student*ptr=&s1;
printf("rollno is %d\n",(*ptr).rollno);
printf("rollno is %d\n",ptr->rollno);





    return 0;
}