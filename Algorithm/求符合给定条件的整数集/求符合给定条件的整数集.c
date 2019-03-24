#include<stdio.h>
void getnum(int n, int sum,int* c,int arr[]);

int main(){
    int n;
    scanf("%d", &n);
    int c = 0;
    int arr[4] = {0};
    for(int i = 0; i<=3; i++){
        arr[i] = 1;         //标记使用
        c = 0;
        getnum(n,i+n,&c,arr);
        printf("\n");
        arr[i] = 0;
    }
    return 0;
}

void getnum(int n, int sum,int* c,int arr[]){
    if(sum > 100){
        printf("%d", sum);
        ++*c;
        if(*c != 6){
            printf(" ");
        }
        return ;
    }
    for(int j = 0; j <= 3; j++ ){
        if(arr[j] != 1){
            arr[j] = 1;     //标记已使用
            getnum(n, sum*10+j+n,c,arr);
            arr[j] = 0;
        }
    }
}
