#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{   float r,v;
    printf("输入半径r:");   
    scanf("%f",&r);
    v=4.0/3*PI*pow(r,3);
    printf("体积为：%.2f\n",v);
    return 0;
}