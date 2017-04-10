#include<stdio.h>
#include<stdlib.h>
main()
{struct Student
{long int num;
char name[20];
char sex;
char addr[20];
}a={10101,"li lin",'M',"123 beijing Road"};
printf("NO.;%ld\nname:%s\nsex:%c\naddress:%s\n",a.num,a.name,a.sex,a.addr);
return 0;
}
