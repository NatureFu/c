#include<stdio.h>
int main()
{
    double a,S,C;
printf("请输入正方形边长的值:");
scanf("%lf",&a);
S=a*a;
C=4*a;

printf("正方形的面积为:%.2lf\n",S);
printf("正方形的周长为:%.2lf\n",C);
return 0;
}