#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = rand();
    int b = rand()%10;//0-9
    int c = rand()%51+13;//13-63的范围
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    return 0;
}
