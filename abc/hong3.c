#include <stdio.h>
#define CON1(a,b)a##e##b
#define CON2(a,b)a##b##00
int main()
{
    printf("%f\n",CON1(8.5,2));
    printf("%d\n",con2(12,34));
    return 0;
}
