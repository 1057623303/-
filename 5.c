#include<stdio.h>
#include<stdlib.h> 
struct Student//�����ṹ������ struct person 
{
int num;
char name[20];
char sex;
int age;
};
struct Student stu[3]={{10101,"zhang",'M',78},{10103,"wang",'M',98},{10106,"li",'M',86}};//����ṹ�����鲢��ʼ�� 
main()
{struct Student *p;//����ָ��struct student�������ݵ�ָ�����p 
printf("NO.Name   sex age\n");
for(p=stu;p<stu+3;p++)
printf("%d,%s,%c,%d",p->num,p->name,p->sex,p->age);
return 0;
}
