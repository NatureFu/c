#include<stdio.h>
int main()
{   int a=123;
    long b=32770;
    printf("a=%d,b=%1d\n",a,b);
    printf("a=%d,b=%d\n",a,b);   
    printf("a=%o,b=%1o\n",a,b);
    printf("a=%#x,b=%#1x\n",a,b);
    printf("a=%d,b=%1d\n",a);
    printf("a+b=%1d\n",a+b,b);
    printf("output end!\n");
    return 0;
}