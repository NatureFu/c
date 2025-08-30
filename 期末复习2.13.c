#include<stdio.h>
int main()
{ int number,a,b,c;
 number=123;
 printf("输入的3位数为:%d\n",number);
a=number/100;
b=(number-a*100)/10;
c=number%10;
printf("反序数是:%d%d%d\n",c,b,a);
return 0;
}