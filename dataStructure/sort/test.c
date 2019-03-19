#include <stdio.h>
#include <stdlib.h>


void quickSort(int *arr,int lo,int hi);
void heapSort(int *arr,int n);

void show(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]= {8,20,31,2,6,54};
    int len = sizeof(arr)/sizeof(int);
    //²âÊÔquickSort
    //quickSort(arr,0,len-1);
    //show(arr,len);
    //²âÊÔ¶ÑÅÅÐò
//todo    heapSort(arr,len-1);
//    show(arr,len);
    return 0;
}
