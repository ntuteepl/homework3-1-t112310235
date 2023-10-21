#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
 if (s1 > s2) {
        int temp = d1;
        d1 = d2;
        d2 = temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
    }

    if (s2 > s3) {
        int temp = d2;
        d2 = d3;
        d3 = temp;
        temp = s2;
        s2 = s3;
        s3 = temp;
    }

    if (s1 > s2) {
        int temp = d1;
        d1 = d2;
        d2 = temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
    }

   int cars = 0;


    // 首先考虑第一辆车
    cars++;

    // 检查第二辆车是否需要
    if (s2 < d1) {
        // 第二辆车的出发时间早于第一辆车的返回时间
        cars++;
    } else if (s2 < d2) {
        // 第二辆车的出发时间早于第二个订单的结束时间
        d1 = d2; // 更新第一辆车的结束时间为第二个订单的结束时间
    }

    // 检查第三辆车是否需要
    if (s3 < d1) {
        // 第三辆车的出发时间早于第一辆车的返回时间
        cars++;
    }

    printf("%d\n", cars);

    return 0;
}
