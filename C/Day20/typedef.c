#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu ;
int main(){
    stu s1;
    s1.roll = 1250;
    s1.cgpa = 9.0;
    strcpy(s1.name, "muktha");
    printf("student name is %s\n",s1.name);


    return 0;

}