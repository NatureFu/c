#include<stdio.h>
#define PI 3.14
int main()
{   int x; float y;
    printf("输入x的值:");   
    scanf("%d",&x);
    if(x!=0)
        y=1.0/x;
    else
        y=0;
    printf("%d,%f",x,y);
    return 0;
}