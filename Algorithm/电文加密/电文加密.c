/* 电文加密 <C语言程序设计>P124 */

int main(){
    char arr[255];
    gets(arr);
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'a' && arr[i] + 8 >'z'){
            arr[i] = arr[i] + 8 - 26 ;
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z' && arr[i] + 8 >'Z'){
            arr[i] = arr[i] + 8 - 26 ;
        }
        else
            arr[i] = arr[i] + 8;
        printf("%c", arr[i]);
    }
    return 0;
}
