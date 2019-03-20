#include <stdio.h>
#include <stdlib.h>
/*
*二分查找
*递归和非递归
*/
int binSerachNonRecur(int *arr,int len,int key){
    int i = 0;
    int j = len - 1;
    int mid;
    while(i <= j){
        mid = (i + j) >> 1;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            i = mid + 1;
        }else{
            j = mid - 1;
        }
    }
    return -1;
}

int binSearchRecur(int *arr,int lo,int hi,int key){
    if(lo>hi)
        return -1;
    int mid = (lo + hi) >> 1;
    if(key == arr[mid])
        return mid;
    else if(key > arr[mid])
        return binSearchRecur(arr,mid+1,hi,key);
    else
        return binSearchRecur(arr,lo,mid-1,key);
}



//测试
int main()
{
    int arr[] =  {8,12,32,53,84};
    //int index = binSerachNonRecur(arr,5,100);
    //printf("%d",index);
    int index = binSearchRecur(arr,0,4,8);
    printf("%d",index);
    return 0;
}
