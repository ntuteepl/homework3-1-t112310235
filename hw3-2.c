#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的出发时间和返回时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    int max_return_time = 0; // 初始化最晚的返回时间为0

    // 找出最晚的返回时间
    if (d1 > max_return_time) {
        max_return_time = d1;
    }
    if (d2 > max_return_time) {
        max_return_time = d2;
    }
    if (d3 > max_return_time) {
        max_return_time = d3;
    }

    int cars = 0; // 初始化车辆数量为0
    int current_time = 0; // 初始化当前时间为0

    // 循环遍历时间，如果当前时间小于最晚的返回时间，增加车辆并更新当前时间
    while (current_time < max_return_time) {
        int earliest_next_start = max_return_time + 1; // 初始化下一个订单的最早出发时间为比最晚返回时间更晚的时间

        // 寻找下一个订单的最早出发时间
        if (s1 > current_time && s1 < earliest_next_start) {
            earliest_next_start = s1;
        }
        if (s2 > current_time && s2 < earliest_next_start) {
            earliest_next_start = s2;
        }
        if (s3 > current_time && s3 < earliest_next_start) {
            earliest_next_start = s3;
        }

        // 更新当前时间为下一个订单的最早出发时间
        current_time = earliest_next_start;
        cars++; // 增加车辆数量
    }

    printf("%d\n", cars); // 输出最少车辆数量

    return 0;
}
