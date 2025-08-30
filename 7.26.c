#include<stdio.h>
int fun(int a, int b)
{  int c;
if(a>b)
c=1;
else if(a==b)
c=0;
else
c=-1;
return c;
}
int main()
{ int i=10,j;
j=fun(++i,i);
printf("j=%d\n",j);
return 0;
}