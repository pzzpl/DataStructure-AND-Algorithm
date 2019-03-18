#include <stdio.h>
#include <stdlib.h>

int fact(int x){
    if(x == 1)
        return 1;
    return x*fact(x-1);

}

int main()
{
    double e = 1.0;
    int n = 1;
    int i = 1;
    while(1.0/n > 1e-10){
        e += 1.0/n;
        i++;
        n = fact(i);
    }
    printf("%.16f",e);
    return 0;
}
