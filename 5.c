#include<stdio.h>
#include<stdlib.h> 
struct Student//声明结构体类型 struct person 
{
int num;
char name[20];
char sex;
int age;
};
struct Student stu[3]={{10101,"zhang",'M',78},{10103,"wang",'M',98},{10106,"li",'M',86}};//定义结构体数组并初始化 
main()
{struct Student *p;//定义指向struct student类型数据的指针变量p 
printf("NO.Name   sex age\n");
for(p=stu;p<stu+3;p++)
printf("%d,%s,%c,%d",p->num,p->name,p->sex,p->age);
return 0;
}
