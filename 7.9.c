#include<stdio.h>
int fun2()
{  int k=10;
printf("%d\n",k);
return(10*k);
}
int fun1()
{   int b;
b=fun2();
printf("%d\n",b);
return(10*b);
}
int main()
{  int a;
a=fun1();
printf("%d\n",a);
return 0;
}