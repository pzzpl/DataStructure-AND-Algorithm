/*´òÓ¡Ñî»ÔÈı½Ç*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m = 2*n - 1;
    int arr[n][m];
    memset( arr, 0,sizeof(arr));
    int start = m/2;
    int end = start;
    arr[0][start] = 1;
    for(int i = 1; i < n;i++){
        start--;end++;
        arr[i][start] = arr[i][end] = 1;
        for(int j = start + 2; j < end; j+=2){
            arr[i][j] = arr[i-1][j-1] +arr[i-1][j+1];
        }
    }
    for(int i = 0; i<n ; i++){
        for(int j= 0; j < m;j++){
            if(arr[i][j] != 0){
                printf("%3d",arr[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;

}
