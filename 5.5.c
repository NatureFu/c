#include <stdio.h>
int main() 
{
    int sum = 0; 
    for (int i = 1; i <= 50; i++)
     {
        if (i % 2 == 0) 
        {
            continue; 
        }
        sum += i;
    }
    printf("1到50之间所有奇数之和为: %d\n", sum);
    return 0;
}