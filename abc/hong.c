#include <stdio.h>

#define SSSV(s1,s2) s1=length*width;s2=length+width;
int main()
{
    int length=2,width=3,a,b;
    SSSV(a,b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
