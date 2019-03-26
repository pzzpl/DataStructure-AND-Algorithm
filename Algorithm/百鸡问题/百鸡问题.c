/* ∞Ÿº¶Œ Ã‚ */

int main(){
    int m, n, k;
    int i = 0;
    for(m = 1; m <= 20; m++){
        for(n = 1; n <= 33; n++){
            k = 100 - m - n;
            if(k % 3 == 0 && (5*m + 3*n + k/3) <= 100){
               printf("solution %d : cock = %d, hen = %d, chick = %d, sum = %d\n",++i,m,n,k,(5*m + 3*n + k/3));
            }
        }
    }
    return 0;
}
