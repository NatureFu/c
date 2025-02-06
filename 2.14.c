#include<stdio.h>
int main()
{   int i,j=7;
    float k=5;
    i=(j=j+2,j/k);
    printf("i=%d\n",i);
    return 0;
}