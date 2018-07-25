#include <stdio.h>

int main()
{
    int a=10,b;
    int *p,*q;
    p = &a;
    b = *p+3;
    *p = *p+1;
    printf("%d,%d\n",a,b);
    q=p;
    *q=*q+1;
    printf("%d,%d\n",a,b);
    return 0;
}


