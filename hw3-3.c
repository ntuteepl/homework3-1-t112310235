
#include <stdio.h>
#include <stdlib.h>

int main()

{


   /* int a[4];
    int b[4];
    for (int i = 0; i < 4; i++) {
            scanf("%1d", &a[i]);
        }
   for (int i = 0; i < 4; i++) {
            scanf("%1d", &b[i]);
        }

                int sum1=a[0]+a[1]+a[2]+a[3];
                int sum2=b[0]+b[1]+b[2]+b[3];
                int a1=a[0]*1000+a[1]*100+a[2]*10+a[3];
                int b1=b[0]*1000+b[1]*100+b[2]*10+b[3];
          if(sum1>sum2){
        printf("%d\n",b1);}
     if(sum1<sum2){
        printf("%d\n",a1);}
     if(sum1==sum2){
        if(a1>b1)
         printf("%d\n",b1);
        if(a1<b1)
         printf("%d\n",a1);
        }

*/
    int a,b;
     scanf("%d %d", &a,&b);

      int sum1=(a/1000)+(a%1000)/100+((a%1000)%100/10)+((a%1000)%100%10/1);
      int sum2=(b/1000)+(b%1000)/100+((b%1000)%100/10)+((b%1000)%100%10/1);
     if(sum1>sum2){
        printf("%d\n",b);}
     if(sum1<sum2){
        printf("%d\n",a);}
     if(sum1==sum2){
        if(a>b)
         printf("%d\n",b);
        if(a<b)
         printf("%d\n",a);
        }

return 0;
}
