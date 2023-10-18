#include <stdio.h>
#include <stdbool.h>

 main() {
    int num;

    scanf("%d", &num);
    bool prime=true;

    for (int i = 2; i * i <= num; i++){
        if ((num % i) == 0){
           prime=false;


      }

    }
    if(prime==1)
        printf("YES");
        if(prime==0)
        printf("NO");
 }
