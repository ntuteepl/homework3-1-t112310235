#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    int cars = 1; // 初始化车辆数量为1

    // 找到最早的订单开始时间
    int earliest_start = s1;
    if (s2 < earliest_start) {
        earliest_start = s2;
    }
    if (s3 < earliest_start) {
        earliest_start = s3;
    }

    // 找到最晚的订单结束时间
    int latest_end = d1;
    if (d2 > latest_end) {
        latest_end = d2;
    }
    if (d3 > latest_end) {
        latest_end = d3;
    }

    int timeline[25] = {0}; // 用于跟踪时间线上的订单需求

    for (int t = earliest_start; t < latest_end; t++) {
        if (t >= s1 && t < d1) {
            timeline[t]++;
        }
        if (t >= s2 && t < d2) {
            timeline[t]++;
        }
        if (t >= s3 && t < d3) {
            timeline[t]++;
        }

        // 如果某个时间点的订单需求大于1，增加车辆
        if (timeline[t] > 1) {
            cars++;
        }
    }

    printf("%d\n", cars); // 输出最少车辆数量

    return 0;
}
