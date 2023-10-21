#include <stdio.h>

int main() {
    int start1, end1, start2, end2, start3, end3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &start1, &end1, &start2, &end2, &start3, &end3);

    // 根据订单的结束时间手动排序
    if (start1 > start2) {
        int temp = end1;
        end1 = end2;
        end2 = temp;
        temp = start1;
        start1 = start2;
        start2 = temp;
    }

    if (start2 > start3) {
        int temp = end2;
        end2 = end3;
        end3 = temp;
        temp = start2;
        start2 = start3;
        start3 = temp;
    }

    if (start1 > start2) {
        int temp = end1;
        end1 = end2;
        end2 = temp;
        temp = start1;
        start1 = start2;
        start2 = temp;
    }

    int cars = 1;
    if((end1 > start2 && end1 <= start3)||(end1 <= start2 && end2 > start3)||(end1 > start2 && start3 > end2 && start3 > end1))
        cars=2;
    if(end1> start2 && start3 > start2 && start3 < start1)
        cars=3;
    printf("%d\n", cars);

    return 0;
}
