#include <stdio.h>

/*
算法:
满二叉树
最后一个分支结点
从最后一个分支结点开始调整堆(shift函数)
每次调整完，把堆顶的元素弹出
*/

void shift(int *arr,int low,int high){
    //满二叉树从0开始编号
    int i = low;//左孩子
    int j = 2 * i + 1;//右孩子
    int temp = arr[i];
    while(j <= high){//在调整范围之内干事
        if(j < high && arr[j] < arr[j+1])
            j++;//左右孩子交换,准备左右孩子较大的换上去
        if(temp < arr[j]){
            arr[i] = arr[j];
            i = j;
            j = 2 * i + 1;//再向下调整
        }else{
            break;
        }
    }//end while
    arr[i] = temp;
}//end

void heapSort(int *arr,int n){
    int i;
    int temp;
    for(i = n/2-1;i>0;i--){//最后一个分支结点(减一是因为n为长度，而数组从0开始
        shift(arr,i,n-1);//调整范围 i n-1
    }//end for
    for(i=n-1;i>0;i--){
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        shift(arr,0,i-1);
    }
}
