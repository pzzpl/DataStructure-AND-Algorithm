#include <stdio.h>
#include <stdlib.h>


void quickSort(int *arr,int lo,int hi);
void heapSort(int *arr,int n);
void insertSort(int *arr,int len);
void binInsertSort(int *arr,int len);

void show(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    putchar('\n');
}

//²âÊÔ
int main()
{
    int arr[]= {8,20,31,2,6,54};
    int len = sizeof(arr)/sizeof(int);
    show(arr,len);

    //quickSort(arr,0,len-1);
    //show(arr,len);

//todo    heapSort(arr,len-1);

    //insertSort(arr,len);
    //show(arr,len);
    binInsertSort(arr,len);
    show(arr,len);
    return 0;
}
