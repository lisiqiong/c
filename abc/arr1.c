#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[10] = {5,6,12,34,200,32,12,11,3,10};
    int i,num,subscript = -1;
    printf("Please iniput an integer:");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(nums[i]==num)
        {
            subscript = i;
            break;
        }
    }

    if(subscript<0){
        printf("%d is'nt in the array.\n");
    }else{
        printf("%d is in the array ,and it's subscript is %d\n",num,subscript);
    }
    system("pause");
    return 0;
}
