#include <stdio.h>
#include <stdlib.h>


void quickSort(int *arr,int lo,int hi);
void heapSort(int *arr,int n);
void insertSort(int *arr,int len);
void binInsertSort(int *arr,int len);
void mergeSort(int arr[],int low,int high);

void show(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    putchar('\n');
}

int main()
{
    int arr[]= {8,20,31,2,6,54};
    int len = sizeof(arr)/sizeof(int);
    show(arr,len);
    //测试快排
    //quickSort(arr,0,len-1);
    //show(arr,len);

    //测试堆排序
//todo    heapSort(arr,len-1);

    //测试插入排序
    //insertSort(arr,len);
    //show(arr,len);
    //binInsertSort(arr,len);
    //show(arr,len);

    //测试归并排序
    mergeSort(arr,0,len-1);
    show(arr,len);
    return 0;
}
