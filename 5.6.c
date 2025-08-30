#include<stdio.h>
#include<math.h>
int main()
{   int i;
    float x,max;
    printf("请输入第一个数:");
    scanf("%f",&x);
    max=x;
    for(i=1;i<=9;i++)
    {   printf("请输入第%d个数:",i+1);
        scanf("%f",&x);
        if(x>max)
         max=x;
    }
         printf("10个数的最大值是：%.0f",max);
        return 0;
}