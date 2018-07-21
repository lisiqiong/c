#include <stdio.h>

int main()
{
    int a[10],i,j,k,min,save;
    printf("请输入10个整数\n",&a[i]);
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<9;i++)
    {
        k=i;
        min = a[i];
        for(j=i;j<10;j++){
            if(a[j]<min)
            {
                min = a[j];
                k = j;
            }
        }
        if(k!=j)
        {
            save = a[i];
            a[i] = a[k];
            a[k] = save;
        }
    }
    printf("输出排序后的十个整数\n");
    for(i=0;i<10;i++)
    {
       printf("%d\n",a[i]);
    }
    return 0;
}
