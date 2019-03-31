/* 求素数 <C语言程序设计>P124 */

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("please input an N:");
    scanf("%d",&n);
    int arr1[n+1];
    memset(arr1, 0, sizeof(arr1));
    /*for(int i = 0; i <=n; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n***********\n");*/
    /*方法一，删除倍数法*/
    int arr2[n+1];
    memset(arr2, 0, n+1);
    arr1[0] = arr1[1] = 1;
    int j,k;
    for(int i = 2; i <= n; ++i){
        if(arr1[i] != 1){
            printf("%d ",i);
            j = i*2;
            while(j <= n){ //把i的倍数都做标记
                arr1[j] = 1;
                j += i;
            }
        }
    }
    /*printf("\n");
    for(int i = 0; i <= n; i++){
        if(arr1[i] != 1 ) printf("%d ",i);
    }*/
    printf("\n");


    /* 方法2： 用数列保存素数，如果一个数不是比他小的任何一个素数的倍数，那么他就是素数*/
    arr2[0] = 2;
    int end = 0;
    printf("%d ", arr2[0]);
    for(int i = 3; i <=n; i++){
        for(k = 0; k <=end; k++){//看前面的质数中有没有他的因子
            if(i % arr2[k] == 0){
                break;
            }
        }
        if(k > end){
            arr2[++end] = i;
            printf("%d ", arr2[end]);
        }
    }
    return 0;
}
