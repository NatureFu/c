#include <stdio.h>

int main() {
    int year, month, days;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("请输入年份和月份：");
    scanf("%d %d", &year, &month);

    // 判断闰年
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29; // 闰年的二月有29天
    }

    if (month < 1 || month > 12) {
        printf("输入的月份无效。\n");
    } else {
        printf("%d年%d月有%d天\n", year, month, days_in_month[month]);
    }

    return 0;
}
