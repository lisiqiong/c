#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    int sum;
    int avg;
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    avg = sum/5;
    printf("五个数的和是%d\n",sum);
    printf("五个数的平均数为%d\n",avg);
    return 0;
}
