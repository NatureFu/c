#include<stdio.h>

// 定义联合体 data
union data {
    char c;  // 字符型成员
    int x;   // 整型成员
};

// 函数 ff 的实现
void ff(union data dx)
{
    // 打印字符成员的值及其地址
    printf("%c, %p\n", dx.c, (void*)&dx.c);
    dx.x = 10;  // 修改联合体的整型成员
    // 打印整型成员的值及其地址
    printf("%d, %p\n", dx.x, (void*)&dx.x);
}

int main()
{
    // 定义联合体变量 dd
    union data dd;
    dd.c = 'A';  // 初始化字符成员为 'A'
    // 打印字符成员的值及其地址
    printf("%c, %p\n", dd.c, (void*)&dd.c);
    ff(dd);  // 调用函数 ff
    // 打印整型成员的值
    printf("%d\n", dd.x);
    return 0;
}
