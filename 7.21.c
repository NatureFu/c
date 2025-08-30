#include<stdio.h>
void num()
{  extern int x,y;
int a=8,b=7;
x+=a-b;
y-=a+b;
}
int x,y;
int main()
{ int a=7,b=8;
x=a+b;
y=a-b;
num();
printf("%d,%d\n",x,y);
return 0;
}