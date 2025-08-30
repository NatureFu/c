#include <stdio.h>

void input(int a[], int n);
void bubble(int a[], int n);
void print(int a[], int n);

int main(void) {
    int n, a[10];
    printf("输入变量n的值:(n<=10):");
    scanf("%d", &n);
    printf("输入%d个数组元素:", n);
    input(a, n);  // 输入数组
    bubble(a, n); // 冒泡排序
    printf("排序后的数组:");
    print(a, n);  // 输出排序后的数组
    printf("\n");
    return 0;
}

void input(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void bubble(int a[], int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // 交换相邻元素
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}
