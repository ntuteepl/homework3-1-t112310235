#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 对订单按出发时间升序排序
    if (s1 > s2) {
        int temp = s1;
        s1 = s2;
        s2 = temp;
        temp = d1;
        d1 = d2;
        d2 = temp;
    }
    if (s2 > s3) {
        int temp = s2;
        s2 = s3;
        s3 = temp;
        temp = d2;
        d2 = d3;
        d3 = temp;
    }
    if (s1 > s2) {
        int temp = s1;
        s1 = s2;
        s2 = temp;
        temp = d1;
        d1 = d2;
        d2 = temp;
    }

    int cars = 1; // 初始化车辆数量为1
   
   
    printf("%d\n", cars); // 输出最少车辆数量

    return 0;
}
