#include <stdio.h>
int main()
{
    int i=1,sum=0;
    do
    {
        sum  +=i;
        i++;
    }while(i<=100);
    printf("输出前100项的和:%d\n",sum);
    return 0;
}
