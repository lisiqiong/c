#include <stdio.h>

/**
 *联合体是一种结构，结果可以存储不同类型的成员，但是同一时间只能够存放其中一种
 * **/

union Demo
{
    int a;
    char b;
    long long  c;
};

int main(){
    union Demo demo;
    demo.a = 10;
    printf("a=%d\n",demo.a);
    printf("b=%d\n",demo.b);
    printf("c=%d\n",demo.c);
    return 0;
}
