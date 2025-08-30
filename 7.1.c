#include<stdio.h>
int main()
{  int a,b,c,d,e,max; 
a=10;b=12;c=9;d=13;e=5;
max=a;
if(b>max) max=b;
if(c>max) max=c;
if(d>max) max=d;
if(e>max) max=e;
printf("最大值为:%d",max);
return 0;
}