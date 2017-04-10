#include<stdio.h>
#include<string.h>
struct per{
    char name[20];
    int count;
}leader[3]={"liu",0,"duan",0,"yien",0};//利用数组定义结构体变量 
int main(){
    int j,i; 
    char leader_name[20];
    for(i=0;i<10;i++){
        scanf("%s",leader_name);
        for(j=0;j<3;j++)
        if(strcmp(leader_name,leader[j].name)==0)//C/C++函数，比较两个字符串,只能比较字符串，不能比较数字等其他形式的参数。
        leader[j].count++;
    }
    printf("\nresult:\n");
    for(i=0;i<3;i++)
    printf("%s:%d\n",leader[i].name,leader[i].count);
    return 0;
}
