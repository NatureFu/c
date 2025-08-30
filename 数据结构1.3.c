#include <stdio.h>
void PrintN(int N);
int main() 
{
    int N = 5;
    scanf("%d",&N);
    PrintN(N);
    return 0;  
}

    if (N)
    {
        PrintN(N - 1);
        printf("%d\n", N);
    }

