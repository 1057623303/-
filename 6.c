#include<stdio.h>
#include<string.h>
main()
{struct Student
{long num;
char name[20];
char sex;
float score;
};
struct Student stu_1;//����struct student���͵ı���stu_1 
struct Student *p;//����ָ��struct student�������ݵ�ָ�����p 
p=&stu_1;//pָ��stu��1 
stu_1.num=10101;//�Խṹ������ĳ�Ա��ֵ 
strcpy(stu_1.name,"li lin");//���ַ������ƺ�����stu_1.name��ֵ 
stu_1.sex='M';
stu_1.score=89;
printf("NO.:%ld\nname:%s\nsex:%c\nscore:%d\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
printf("NO.:%ld\nname:%s\nsex:%c\nscore:%d\n",(*p).num,(*p).name,(*p).sex,(*p).score);
return 0;
}
