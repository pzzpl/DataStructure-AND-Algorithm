#include <stdio.h>
/*
*插入排序
*有序区，和无序区
*折半插入只改变了元素的比较次数，没有改变移动次数。
*/


void insertSort(int *arr,int len){
    int i,j;
    int temp;
    for(i=1;i<len;i++){//总共排序len-1轮
        if(arr[i] < arr[i-1]){//代排元素刚刚好大于 有序区最大的元素，不用排
            temp = arr[i];
            for(j=i-1;temp < arr[j] && j >=0;j--){
                arr[j+1] = arr[j];
            }
            arr[j+1] = temp;
        }
    }
}

int binSearch(int *arr,int key,int begin,int end){
    int mid;
    while(begin <= end){
        mid = (begin+end)>>1;
        if(key > arr[mid])
            begin = mid + 1;
        else
            end = mid - 1;
    }
    return begin;
}

//折半插入排序
void binInsertSort(int *arr,int len){
    int i,j,insertIndex,temp;
    for(i=1;i<len;i++){//总共排序len-1轮
        if(arr[i] < arr[i-1]){//代排元素刚刚好大于 有序区最大的元素，不用排
            temp = arr[i];
            insertIndex = binSearch(arr,temp,0,i-1);//从0~i-1中找到temp插入的位置
            //找到后再移动
            for(j=i-1;j>=insertIndex;j--){
                arr[j+1] = arr[j];
            }
            arr[j+1] = temp;
        }
    }
}
