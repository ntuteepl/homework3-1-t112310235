#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    int cars = 1; // 初始化车辆数量为1

    // 找到最晚的订单开始时间
    int latest_start = s1;
    if (s2 > latest_start) {
        latest_start = s2;
    }
    if (s3 > latest_start) {
        latest_start = s3;
    }

    // 找到最早的订单结束时间
    int earliest_end = d1;
    if (d2 < earliest_end) {
        earliest_end = d2;
    }
    if (d3 < earliest_end) {
        earliest_end = d3;
    }

    if (latest_start >= earliest_end) {
        cars = 0;  // 如果没有订单重叠，不需要额外的车辆
    } else {
        if (s1 <= latest_start && d1 > latest_start) {
            cars++;
        }
        if (s2 <= latest_start && d2 > latest_start) {
            cars++;
        }
        if (s3 <= latest_start && d3 > latest_start) {
            cars++;
        }
    }

    printf("%d\n", cars); // 输出最少车辆数量

    return 0;
}
