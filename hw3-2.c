#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

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
    if (s1>s2){
        int temp=s1;
            s1=s2;
            s2=temp;
            temp=d1;
           d1=d2;
            d2=temp;


    }
     if (d1>d2){
        int temp=d1;
           d1=d2;
            d2=temp;


    }
     if (d2>d3){
        int temp=d2;
           d2=d3;
            d3=temp;


    }
     if (d1>d2){
        int temp=d1;
           d1=d2;
            d2=temp;


    }

    int cars=1;
    if(d1>s2&&d1<=s3)
        cars=2;
    if(d1>s2&&d1>s3)
        cars=3;

    printf(" %d\n", cars);

    return 0;
}
