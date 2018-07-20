#include <stdio.h>


int main()    
{    
    int a,b,c;  

    //1.正常的scanf的用法    
    scanf("%d%d%d",&a,&b,&c);    
    printf("a = %d b = %d c = %d\n",a,b,c);   

    //            //2.使用*抑制符跳过输入的某个值    
    scanf("%3d%*2d%2d%3d",&a,&b,&c);    
    printf("a = %d b = %d c = %d\n",a,b,c);  

    //                        //3.最好不要在scanf里面写逗号和空格之类的,不然输入    
    //                            //输入的时候必须把这些都写上    
    scanf("%d,%d,%d",&a,&b,&c);    
    printf("a = %d b = %d c = %d\n",a,b,c);    
    return 0;    
}    
