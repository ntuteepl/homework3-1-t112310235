#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int start[], int end[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (end[j] > end[j + 1]) {
                swap(&end[j], &end[j + 1]);
                swap(&start[j], &start[j + 1]);
            }
        }
    }
}

int main() {
    int start[3], end[3];

    // 输入订单的起始时间和结束时间
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &start[i], &end[i]);
    }
    
    // 按结束时间对订单进行排序
    sort(start, end, 3);

    int cars = 1;
    int current_end = end[0];

    for (int i = 1; i < 3; i++) {
        if (start[i] >= current_end) {
            // 当前订单可以使用同一辆游览车
            current_end = end[i];
        } else {
            // 需要另一辆游览车
            cars++;
            current_end = end[i];
        }
    }

    printf("%d\n", cars);

    return 0;
}



