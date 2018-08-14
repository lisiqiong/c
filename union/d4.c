#include <stdio.h>

/**
 *
 *联合体的对齐方式要适合全部成员
 1.成员大小足够容纳最宽的成员
 2.大小能够被全部成员类型的大小所整除
 * **/

union Demo{
    int a;//4
    char b;//2
    long long c;//8个字节
    char d[11];//11个字节
};

int main(){
    union Demo demo;
    printf("%d\n",sizeof(demo));
    return 0;
}
