#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char c;
    int n = 1;
    if((fp = fopen("test1.txt","r")) == NULL)
    {
        printf("文件打开失败\n");
        exit(1);
    }
    //EOF是文件结尾的标志，此处是判断是否到文件尾
    while(c= fgetc(fp)!=EOF)
    {
        printf("%c",c);
        n++;
    }
    printf("\n");
    fclose(fp);
    return 0;
}
