#include<stdio.h>
#include<stdlib.h> 
struct Student//�����ṹ������ struct person 
{
int num;
char name[20];
float score;
};
int main()
{
struct Student stu[5]={{10101,"zhang",78},{10103,"wang",98},{10106,"li",86},{10108,"ling",73},{10110,"sun",100}};//����ṹ�����鲢��ʼ��
struct Student temp;
const int n=5;
int i,j,k;//���峣����n 
printf("the order is:\n");
for(i=0;i<n-1;i++)
{k=i;
for(j=i+1;j<n;j++)
if(stu[j].score>stu[k].score)
k=j;
temp=stu[k];stu[k]=stu[i];stu[i]=temp;    //stu[k]��stu[i]Ԫ�ػ��� 
}
for(i=0;i<n;i++)
printf("%d,%s,%d",stu[i].num,stu[i].name,stu[i].score);
printf("\n");
return 0;
}
