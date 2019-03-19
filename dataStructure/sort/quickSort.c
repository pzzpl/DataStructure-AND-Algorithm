#include <stdio.h>

void quickSort(int *arr,int lo,int hi){
    int i = lo;
    int j = hi;
    int pivot;
    if(lo < hi){//递归出口
        pivot = arr[i];
        while(i<j){
            while(i<j && pivot <= arr[j]) j--;
            if(i<j){
                arr[i] = arr[j];
                i++;
            }
            while(i<j && pivot > arr[i]) i++;
            if(i<j){
                arr[j] = arr[i];
                j--;
            }
        }
        arr[i] = pivot;//确定一个位置
        quickSort(arr,lo,i-1);
        quickSort(arr,i+1,hi);
    }//end if
}
