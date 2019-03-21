#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


//欧几里德算法 求最小公约数
int getHCF(int m,int n){
    int temp;
    while(n != 0){
        temp = n;
        n = m%n;
        m = temp;
    }
    return m;
}


int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int HCF = getHCF(m,n);
    printf("最大公约数:%d\n",HCF);
    printf("最小公倍数:%d",m*n/HCF);


    return 0;
}
