#include<stdio.h>
    int main()
{  
    int number,a,b,c;
    number=100;
    do
    {  
        a=number/100;
        b=number%100/10;
        c=number%10;
        if(number==a*a*a+b*b*b+c*c*c)
            printf("%5d",number);
        number++;
    }
    while(number<=999);
    return 0;
}