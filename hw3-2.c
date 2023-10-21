#include <stdio.h>

// 定义订单结构
struct Order {
    int start_time;
    int end_time;
};

// 检查两个订单是否重叠
int isOverlap(struct Order order1, struct Order order2) {
    if (order1.start_time >= order2.end_time || order1.end_time <= order2.start_time) {
        return 0; // 不重叠
    } else {
        return 1; // 重叠
    }
}

int main() {
    struct Order orders[3]; // 存储3笔订单的数组
    int overlapCount = 0;  // 重叠订单计数

    // 输入订单信息
    for (int i = 0; i < 3; i++) {
        printf("输入第 %d 笔订单的开始时间 (小时)：", i + 1);
        scanf("%d", &orders[i].start_time);
        printf("输入第 %d 笔订单的结束时间 (小时)：", i + 1);
        scanf("%d", &orders[i].end_time);
    }

    // 检查订单是否重叠
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (isOverlap(orders[i], orders[j])) {
                overlapCount++;
            }
        }
    }

    // 根据重叠订单数量确定派送车辆数量
    int vehiclesRequired = overlapCount + 1; // 至少需要1辆车
    printf("需要派送 %d 辆车\n", vehiclesRequired);

    return 0;
}
