#include <stdio.h>

/**
 *联合体的所占的内存长度，一般等于其最大的成员的内存长度
 * **/

union Demo
{
    int a;
    char b;
    long long  c;
};

int main(){
    union Demo demo;
    printf("%d\n",sizeof(demo));
    return 0;
}
