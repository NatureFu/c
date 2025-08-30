#include<stdio.h>
int main(void)
{ int i,n;
double factorial;
printf("请输入n的值为:");
scanf("%d",&n);
factorial=1;
for(i=1;i<=n;i++)
factorial=factorial*i;
printf("%d!=%.0f\n",n,factorial);
return 0;
}