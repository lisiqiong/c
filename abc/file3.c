#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "通过fputs方法往文件中写入信息";
    FILE *fp = fopen("test2.txt","w");
    if(fp = NULL)
    {
        printf("文件打开失败\n");
        exit(1);
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}
