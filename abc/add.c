#include <stdio.h>
int main(){
    //函数声明
    int add(int,int);
    int a,b;
    printf("请输入要求和的区域\n");
    scanf("%d%d",&a,&b);
    printf("输出求和后的结果%d\n",add(a,b));
    return 0;
}

int add(int a,int b)
{
    int x=a,y=b,sum=0;
    for(;x<=y;x++){
        sum +=x;   
    }
    return sum;
}
