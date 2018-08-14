int a=0;//全局初始化区
char *p1;//全局未初始化区
main()
{
    static int b=0;//全局静态初始化区
    int c;//栈
    char d[]="abc";
    char *p2;
    char *p3="hello";
    p1=(char*)malloc(10);
    p2=(char*)malloc(20);//分配得来的10和20直接的区域就在堆区
    strcpy(p1,"hello");//hello放在常量区，编译器可能会将它与p3所指向的"hello"优化成一个地方

}
