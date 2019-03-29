/*Ë®ÏÉ»¨Êý*/

#include<stdio.h>
#include<stdbool.h>

bool isNarcissistic(int n);

int main(){
    printf("please input a range:");
    int a, b;
    scanf("%d %d",&a, &b);
    for(int i = a; i <= b; i++){
        if(isNarcissistic(i))
            printf("%d ",i);
    }
    return 0;
}

bool isNarcissistic(int n){
    bool tag = false;
    int sum = n;
    int t;
    for(int i = 0; i< 3 ;i++){
        t = n%10;
        sum -= t*t*t;
        n /= 10;
    }
    if(sum == 0)
        tag = true;
    return tag;
}
