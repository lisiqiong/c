#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[] = "Write The Data to File!";
    int index = 0;
    fp = fopen("test1.txt","w");
    if(fp == NULL){
        printf("文件打开失败!\n");
        exit(1);
    }
    //因为是一个个字符输入的长度，所以要获得长度
    while(index < strlen(str))
        fputc(str[index++],fp);
    fclose(fp);
    return 0;
}
