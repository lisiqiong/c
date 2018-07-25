#include <stdio.h>

union type
{
    int cid;//班级
    char title[20];//职称
};


struct Person
{
    char name[10];//姓名
    char sex;//性别
    int age;//年龄
    int flag;//标志是老师还是学生
    union type tp;
};

int main()
{
    struct Person person[10];
    int i;
    int num;
    char ch;
    printf("请输入要录入的人数:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("请输入第%d个人员的信息：\n",i+1);
        printf("姓名：");scanf("%s",&person[i].name);getchar();
        printf("性别：");scanf("%c",&person[i].sex);getchar();
        printf("年龄：");scanf("%d",&person[i].age);
        printf("职业标示符：");scanf("%d",&person[i].flag);
        if(person[i].flag == 0){
            printf("请输入学生的班级id:");
            scanf("%d",&person[i].tp.cid);
        }
        else if(person[i].flag == 1)
        {
            printf("请输入老师的职称:");
            scanf("%s",&person[i].tp.title);
        }
        else
        {
            printf("输入有误，请重新输入!\n");
            i -= 1;   
        }
    }

    printf("输出所有录入人的信息：\n",i+1);
    for(i=0;i<num;i++)
    {
        printf("输出第%d个人员的信息:",i+1);
        printf("姓名：");puts(person[i].name);
        printf("\t年龄：");printf("%d",person[i].age);
        if(person[i].flag==0)
        {
            printf("\t学生的班级id：");
            printf("%d\n",person[i].tp.cid);
        }
        else if(person[i].flag==1)
        {
            printf("\t老师的职称：");
            puts(person[i].tp.title);
        }
    }
    return 0;
}
