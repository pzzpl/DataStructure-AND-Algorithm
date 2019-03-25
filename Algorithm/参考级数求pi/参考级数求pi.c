/* 参考级数求pi */

#include<stdio.h>
#include<math.h>

int main(){
   double pi = 1;
   double item = 1;
   double min = pow(10,-7);
   int i = 1;
   printf("min = %.10lf\n", min);
   while(item > min){
        i = i + 2;
    item = (double)1/i;
    pi += item*pow(-1,i/2);
   }
   pi =pi *4;
   printf("pi = %lf", pi);
   return 0;
}
