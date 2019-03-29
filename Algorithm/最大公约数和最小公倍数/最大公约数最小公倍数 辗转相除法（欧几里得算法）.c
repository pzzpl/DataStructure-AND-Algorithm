#include<stdio.h>

int main(){
    printf("please input two non-negative int number:");
    int m, n;
    scanf("%d %d",&m, &n);
    int divisor, multiple;
    if(m == 0 || n == 0){
        divisor = multiple = 0;
    }
    else{
        int tmp, big = m, sma = n;
        do{
            if(big < sma){
                tmp = big, big = sma, sma = tmp;
            }
            tmp = big % sma;
            //if(tmp == 0) break;
            big = sma, sma = tmp;
        }while(tmp != 0);
        divisor = big;
        multiple = m * n / divisor;
    }
    printf("Largest common divisor is %d\n", divisor);
    printf("Smallest common multiple is %d\n", multiple);
}
