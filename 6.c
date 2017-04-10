#include<stdio.h>
#include<string.h>
main()
{struct Student
{long num;
char name[20];
char sex;
float score;
};
struct Student stu_1;//定义struct student类型的变量stu_1 
struct Student *p;//定义指向struct student类型数据的指针变量p 
p=&stu_1;//p指向stu—1 
stu_1.num=10101;//对结构体变量的成员赋值 
strcpy(stu_1.name,"li lin");//用字符串复制函数给stu_1.name赋值 
stu_1.sex='M';
stu_1.score=89;
printf("NO.:%ld\nname:%s\nsex:%c\nscore:%d\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
printf("NO.:%ld\nname:%s\nsex:%c\nscore:%d\n",(*p).num,(*p).name,(*p).sex,(*p).score);
return 0;
}
