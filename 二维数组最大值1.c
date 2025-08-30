#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 5, 3}, {4, 7, 9}, {2, 6, 8}};
    int max = arr[0][0];
    int row = 0, col = 0;

    // 寻找最大值
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("最大值是: %d, 位于第%d行，第%d列\n", max, row + 1, col + 1);
    return 0;
}
