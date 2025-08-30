#include<stdio.h>
long fac(int n)
{  int k;
  if(n==0||n==1)
k=1;
else
k=n*fac(n-1);
return k;

}
int main()
{ int n;
scanf("%d",&n);
if(n<0)
printf("数据错误!\n");
else
printf("%d!=%ld\n",n,fac(n));
return 0;

}