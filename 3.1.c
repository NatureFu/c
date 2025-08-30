#include<stdio.h>
int main(void)
{   int celsius,fahr;
    printf("请输入华氏温度:80");
    scanf("%d",&fahr);
    celsius=5*(fahr-32)/9;
    printf("华氏温度为:%d,摄氏温度为:%d\n",fahr,celsius);
    return 0;
}