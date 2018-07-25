#include <stdio.h>
struct date
{
    int year,month,day;
};

struct person
{
    char name[15];
    //在本结构体引用另外一个结构体day
    struct date born;
}p1={"jay",{1888,10,10}};

int main()
{
    struct person p2;
    printf("请输入p2的信息，依次为姓名，出生年月日:\n");
    scanf("%s%d%d%d",&p2.name,&p2.born.year,&p2.born.month,&p2.born.day);
    
    //输出结构体的p1，p2的信息
    printf("%s出生于:%d年%d月%d日\n",p1.name,p1.born.year,p1.born.month,p1.born.day);
    printf("%s出生于%d年%d月%d日\n",p2.name,p2.born.year,p2.born.month,p2.born.day);
    return 0;
}
