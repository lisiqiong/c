#include <stdio.h> 
#include "t.h"
main() 
{ 
    struct{                  /*定义一个结构变量*/ 
        char name[8]; 
        int age; 
        char sex[2]; 
        char depart[20]; 
        float wage1, wage2, wage3, wage4, 
              wage5; 
    }a; 
    FILE *fp; 
    float wage; 
    char c='Y'; 
    fp=fopen("wage.dat", "w");    
    /*创建一个文件只写*/ 
    while(c=='Y' || c=='y')         
    /*判断是否继续循环*/ 
    { 
        printf("/nName:"); 
        scanf("%s", &a.name);     /*输入姓名*/ 
        printf("Age:"); 
        scanf("%d", &a.age);    /*输入年龄*/ 
        printf("Sex:"); 
        scanf("%d", &a.sex); 
        printf("Dept:"); 
        scanf("%s", &a.depart); 
        printf("Wage1:"); 
        scanf("%f", &a.wage1);   /*输入工资*/ 
        printf("Wage2:"); 
        scanf("%f", &a.wage2); 
        printf("Wage3:"); 
        scanf("%f", &a.wage3); 
        printf("Wage4:"); 
        scanf("%f", &a.wage4); 
        printf("Wage5:"); 
        scanf("%f", &a.wage5); 
        wage=a.wage1+a.wage2+a.wage3+a.wage4+a.wage5; 
        printf("The sum of wage is  %6.2f/n", wage);/*显示结果*/ 
        fprintf(fp, "%10s%4d%4s%30s%10.2f/n", a.name, a.age, a.sex,a.depart, wage); 
        while(1) 
        { 
            printf("Continue?<Y/N>"); 
            c=getche(); 
            if(c=='Y' || c=='y' || c=='N' || c=='n') 
                break; 
        } 
    } 
    fclose(fp); 
} 
