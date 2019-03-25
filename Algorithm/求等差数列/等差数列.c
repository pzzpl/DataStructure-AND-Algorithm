/* 求等差数列 */

int main(){
    int evenSum, oddsum, num;
    scanf("%d %d %d", &evenSum, &oddsum, &num);
    if(num%2 != 0){
        printf("wrong num!\n");
        return 0;
    }
    int minus = evenSum - oddsum;
    int tag,d,a;
    if(minus > 0){
        tag = oddsum;    //  首项为奇数
        d = minus / (num/2);
    }
    else {
        tag = evenSum;
        d = -minus /(num/2);
    }
    printf("d = %d\n", d);
    a = (tag*2/(num/2) - (num/2-1)*d*2) / 2;
    printf("a = %d\n",a);
    for(int i = 0; i < num; i++){
        printf("%3d ", a+i*d);
        if((i+1)%10 == 0) printf("\n");
    }
}


