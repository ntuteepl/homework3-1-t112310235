#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 找出最晚的结束时间
    int latest_end_time = d1;
    if (d2 > latest_end_time) {
        latest_end_time = d2;
    }
    if (d3 > latest_end_time) {
        latest_end_time = d3;
    }

    int cars_needed = 0;  // 用于跟踪需要的车辆数量
    int current_time = s1;  // 用于模拟时间线

    while (current_time <= latest_end_time) {
        int order_overlap = 0;  // 用于标记当前时间是否有订单需求

        if (s1 <= current_time && d1 >= current_time) {
            order_overlap = 1;
        }
        if (s2 <= current_time && d2 >= current_time) {
            order_overlap = 1;
        }
        if (s3 <= current_time && d3 >= current_time) {
            order_overlap = 1;
        }

        if (order_overlap) {
            current_time++;
        } else {
            current_time = s1;  // 没有订单需求时，重置时间线到第一个订单的出发时间
            cars_needed++;  // 分配一辆车
        }
    }

    printf("%d\n", cars_needed); // 输出最少车辆数量

    return 0;
}
