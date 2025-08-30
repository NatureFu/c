#include<stdio.h>
int main()
{ int i,n,sum;
printf("请输入n的值为:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
sum=sum+i;
printf("由1到%d的和是:%d\n",n,sum);
return 0;
}