#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 输入订单的起始时间和结束时间
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 根据订单的结束时间手动排序
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

    int cars = 1;

    if ((d1>s2&&s3>=s1)|| (d1<=s2&&s3<d2)||(d1>s2&&s3>=s2))
        cars = 2 ;
    if((d1>s2&&s3>s2&&s3<s1)||(s1==s2&&s3<d1&&s3<d2)||(s2==s3&&d1>s2))
         cars = 3 ;
        printf("%d\n", cars);

    return 0;
}
