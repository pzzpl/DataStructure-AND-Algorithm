#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
快排实现寻找第k小的数
*/

int getMinK(int *arr,int lo,int hi,int k){
    if(k>hi || k<lo){
        printf("input invalid\n");
        return 0;
    }

    int i = lo;
    int j = hi;
    int pivot = arr[lo];
    if(lo <= hi){
        while(i<j){
            while(i<j&& arr[j] > pivot) j--;
            if(i<j){
                arr[i] = arr[j];
                i++;
            }
            while(i<j && arr[i] < pivot) i++;
            if(i<j){
                arr[j] = arr[i];
                j--;
            }
        }

        arr[i] = pivot;

        if(i == k){
            return arr[i];
        }else if(i > k){
            return getMinK(arr,lo,i-1,k);
        }else{
            return getMinK(arr,i+1,hi,k);
        }
    }
}


int main()
{

    int arr[] = {1,6,22,-3,4,8,101,222,32,43};
    int len = sizeof(arr)/sizeof(int);

    while(1){
        int n;
        scanf("%d",&n);
        if(n == -1)
            break;
        int num = getMinK(arr,0,len-1,n-1);
        printf("%d\n",num);
    }



    return 0;
}
