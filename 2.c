#include<stdio.h>
#include<stdlib.h>
int main()
{struct Student
 {int num;
char name[20];
float score;
}; 
struct Student student1={10101,"wang",89};
struct Student student2={10103,"ling",98};
if(student1.score>student2.score)
printf("%d,%s,%f",student1.num,student1.name,student1.score);
else if(student1.score<student2.score)
printf("%d,%s,%f",student2.num,student2.name,student2.score);
else
{
printf("%d,%s,%f",student1.num,student1.name,student1.score);
printf("%d,%s,%f",student2.num,student2.name,student2.score);
}
return 0;
}
