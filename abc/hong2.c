#include <stdio.h>
#define STR(s)#s
int main()
{
    printf("%s\n",STR(lisiqiong.cn));
    printf("%s\n",STR("lisiqiong.cn"));
    return 0;
}
