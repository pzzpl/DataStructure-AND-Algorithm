/*二分法求方程的根
**3x^3 - 5x^2 + 7x -8 = 0*/

#include<stdio.h>
double f(double x);
int main(){
    double l = -10, r = 10;
    double mid,fl,fr,fm;
    while(l < r ){
        mid = (l+r)/2;
        fm = f(mid);
        //printf("fmid = %lf\n", fm);
        if(fm == 0 || r - l < 0.01) {
            printf(" mid = %lf\n",mid);
            break;
        }
        fl = f(l),fr = f(r);
        if(fl*fm < 0){
            r = mid;
        }
        else{
            l = mid;
        }
    }
}

double f(double x){
    double sum = -8;
    sum = sum + 7*x - 5*x*x + 3*x*x*x;
    return sum;
}
