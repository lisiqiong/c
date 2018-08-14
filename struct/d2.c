#include <stdio.h>

int main(){
    struct{
        char *name;
        int num;
        int age;
        char group;
        float score;
    }stu1={"tom",10,30,'A',136.5};
    //赋值
    printf("%s的学号是%d，年龄是%d,在%c组，今年的成绩是%.1f!\n",stu1.name,stu1.num,stu1.age,stu1.group,stu1.score);
    return 0;
}

