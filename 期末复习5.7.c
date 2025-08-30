#include<stdio.h>
int main()
{ int number,a,b,c;
for(number=100;number<=999;number++)
{ a=number/100;
b=number%100/10;
c=number%10;
if(number==a*a*a+b*b*b+c*c*c)
printf("%10d",number);
}
return 0;
}

