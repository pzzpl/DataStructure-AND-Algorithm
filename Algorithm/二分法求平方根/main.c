#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double myAbs(double x){
    if(x<0)
        x = -x;
    return x;
}



double mySqrt(int n){
    if(n<0){
        return -1.0;
    }
    double x1 = 0;
    double x2 =  n;
    double mid ;

    while(myAbs(x1-x2) > 1e-15){
        mid = (x1+x2)/2.0;
        if((x1*x1-n)*(mid*mid-n) < 0){
            x2 = mid;
        }else{
            x1 = mid;
        }
    }
    return mid;
}



int main(){
    double val = mySqrt(2);
    double xval = sqrt(2);
    printf("%.12f",val);
    printf("\n%.12f",xval);

    return 0;
}
