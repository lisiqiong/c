#include <stdio.h>

/**
 *联合体的首地址都是一样的，共享同一块内存空间
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
    printf("%p\n",&demo.a);
    printf("%p\n",&demo.b);
    printf("%p\n",&demo.c);
    return 0;
}
