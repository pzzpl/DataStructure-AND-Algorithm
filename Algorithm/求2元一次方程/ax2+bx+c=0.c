/* 求二元一次方程 ax^2 + bx + c = 0的根 */

#include<stdio.h>
#include<math.h>
int main(){
   double a, b, c;
   double x1,x2;
   scanf("%lf %lf %lf",&a, &b, &c);

   if(a == b && a == 0 && c != 0)
        printf("No solution!\n");
   else if(a == b && a == 0 && c == 0){
      printf("Countless solutions!\n");
   }
   else if(a == 0 && b != 0){
     x1 = (-c)/b;
     printf("Unique solution: x = %lf\n", x1);
   }
   else if(a != 0 && c == 0){
      x1 = (-b)/a;
      printf("Unique solution: x1 = %lf, x2 = 0 \n", x1);
   }
   else{
      double delta = b*b - 4*a*c;
      int tag = 0;
      if(delta < 0){
        delta = -delta;
        tag = 1;
      }
      delta = sqrt(delta);
      x1 = (delta)/(2*a);
      if(tag){
        printf("Unique solution: x1 = %lf + %lf i, x2 = %lf - %lf i\n",(-b)/(2*a), x1 , (-b)/(2*a), x1);
      }
      else
                printf("Unique solution: x1 = %lf, x2 = %lf\n", (-b)/(2*a)+x1, (-b)/(2*a)-x1);
   }
   return 0;
}
