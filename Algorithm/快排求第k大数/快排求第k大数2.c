#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int t );
void quicksort(ElementType A[], int l, int r, int t);

int main ()
{
    ElementType A[MAXN];
    int N, i, k;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("input k:");
    scanf("%d", &k);
    if(k > N){
        printf("Error!\n");
        break;
    }
    printf("%.2f\n", Median(A, N-k));

    return 0;
}

ElementType Median( ElementType A[], int t ){
  quicksort( A, 0, N-1, t);
  return A[t];

}

void quicksort(ElementType A[], int l, int r,int t){
  ElementType tmp = A[l];
  int i = l, j = r;
  while(i < j){
    while(j > i && A[j] >= tmp) j--;
    if(j >= i) A[i] = A[j];

    while(i < j && A[i] <= tmp) i++;
    if(i <= j) A[j] = A[i];

  }
  A[i] = tmp;
  if(i == t) return;
  else{
    if(i > t)
      quicksort(A, l, i-1, t);
    else
      quicksort(A, i+1, r, t);
  }
}
