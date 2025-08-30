#include<stdio.h>
int main ()
{ int a,b,c;
int gcd(int m,int n);
printf("请输入两个整数:");
scanf("%d%d",&a,&b);
c=gcd(a,b);
printf("整数%d和%d的最大公约数是:%d\n",a,b,c);
}
int gcd(int m,int n)
{ int r;
r=m%n;
while(r!=0)
{ m=n;
    n=r;
    r=m%n;
}
return n;
}