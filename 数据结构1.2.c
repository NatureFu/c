#include <stdio.h>
void PrintN(int N)

{
    if (N)
    {
        PrintN(N - 1);
        printf("%d\n", N);
    }
}
int main() {
    int N = 5;
    PrintN(N);
    return 0;  // main 函数的返回值
}