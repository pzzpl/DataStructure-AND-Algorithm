#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MIN 1E-6



double myAbs(double a){
    if(a<0){
        a = -a;
    }
    return a;
}


int main()
{
    double a;
    scanf("%lf",&a);

    double x1 = 1.0;

    double x2 = x1 - (x1*x1 - a)/(2*x1);
    while(myAbs(x2 - x1) > 1e-10){
        x1 = x2;
        x2 = x1 - (x1*x1 - a)/(2*x1);
    }

    printf("result sqrt(a) is : %.5f",x2);

    return 0;
}
