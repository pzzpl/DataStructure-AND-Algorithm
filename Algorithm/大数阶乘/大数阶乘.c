#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial ( const int N ){
    if(N < 0){
        printf("Invalid input");
        return;
    }
    int arr[3000];
    arr[0] = 1;
    int i = 2;
    int tmp;
    int k = 0;      //指示数组保存到哪个位置
    int p;          //逐位乘的位置
    while(i <= N){
        p = 0, tmp = 0;
        while(p <= k){
            tmp += arr[p]*i;
            arr[p] = tmp % 10;
            tmp /= 10;
            p++;
        }
        while(tmp > 0){
            arr[++k] = tmp % 10;
            tmp /= 10;
        }
        i++;
    }
    for(int j = k; j >= 0; j--){
        printf("%d",arr[j]);
    }
    return 0;
}
