#include <stdio.h>

int main()
{
    int i,j,flag,c;
    int a[10];
    printf("请输入十个整数:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<9;i++)
    {
        flag = 0;
        for(j=9;j>i;j--)
        {
            if(a[j-1]>a[j])
            {
                c=a[j-1];
                a[j-1]=a[j];
                a[j]=c;
                flag=1;
            }
        }
        if(flag==0)break;
    }
    printf("输出排序后的10个整数:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
