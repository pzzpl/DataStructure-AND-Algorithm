/* ������ <C���Գ������>P124 */

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
    /*����һ��ɾ��������*/
    int arr2[n+1];
    memset(arr2, 0, n+1);
    arr1[0] = arr1[1] = 1;
    int j,k;
    for(int i = 2; i <= n; ++i){
        if(arr1[i] != 1){
            printf("%d ",i);
            j = i*2;
            while(j <= n){ //��i�ı����������
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


    /* ����2�� �����б������������һ�������Ǳ���С���κ�һ�������ı�������ô����������*/
    arr2[0] = 2;
    int end = 0;
    printf("%d ", arr2[0]);
    for(int i = 3; i <=n; i++){
        for(k = 0; k <=end; k++){//��ǰ�����������û����������
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
