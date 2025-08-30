#include <stdio.h>

void input(int a[], int n);
void quick_sort(int a[], int low, int high);
int partition(int a[], int low, int high);
void print(int a[], int n);

int main(void) {
    int n, a[10];
    printf("输入变量n的值:(n<=10):");
    scanf("%d", &n);
    printf("输入%d个数组元素:", n);
    input(a, n);  // 输入数组
    quick_sort(a, 0, n - 1); // 快速排序
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

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1, temp;
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return i + 1;
}

void quick_sort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}
