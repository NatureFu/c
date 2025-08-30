#include<stdio.h>
int main()
{   int x,y;
    printf("请输入两个整数:");
    scanf("%d,%d",&x,&y);
    printf("两个数中的最大整数为:%d\n",x>y?x:y);
    return 0;
}