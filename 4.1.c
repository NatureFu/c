#include<stdio.h>
#include<math.h>
int main()
{   int a,b,c;
    float area;
    double s;
    printf("请输入三角形的三条边长:a=3,b=4,c=5");   
    scanf("%d,%d,%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    if(a+b<=c||b+c<=a||a+c<=b)
       printf("不构成三角形\n");
 else
{ area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("三角形的面积是：%f\n",area);
}
    return 0;
}