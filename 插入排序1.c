#include <stdio.h>

void input(int a[], int n);
void insertion(int a[], int n);
void print(int a[], int n);

int main(void) {
    int n, a[10];
    printf("输入变量n的值:(n<=10):");
    scanf("%d", &n);
    printf("输入%d个数组元素:", n);
    input(a, n);  // 输入数组
    insertion(a, n); // 插入排序
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

void insertion(int a[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        
        // 移动大于key的元素到右边
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}
