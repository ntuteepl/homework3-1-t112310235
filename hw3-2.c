#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    printf("請輸入三筆訂單的出發時間和返回時間：\n");
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    if (s1>s2){
        int temp=s1;
            s1=s2;
            s2=temp;
            temp=d1;
            d1=d2;
            d2=temp;


    }
    if (s2>s3){
        int temp=s2;
            s2=s3;
            s3=temp;
            temp=d2;
            d2=d3;
            d3=temp;


    }
    if (s1>s3){
        int temp=s1;
            s1=s3;
            s3=temp;
            temp=d1;
            d1=d3;
            d3=temp;


    }

    int cars=1;
    if(d1>s2&&d1<=s3)
        cars=2;
    if(d1>s2&&d1>s3)
        cars=3;

    printf("至少需要 %d 輛車輛\n", cars);

    return 0;
}
