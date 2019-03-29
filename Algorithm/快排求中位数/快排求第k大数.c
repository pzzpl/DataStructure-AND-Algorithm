#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );
void quicksort(ElementType A[], int l, int r, int N);

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median( ElementType A[], int N ){
  quicksort( A, 0, N-1, N);
  return A[N/2];

}

void quicksort(ElementType A[], int l, int r,int N){
  ElementType tmp = A[l];
  int i = l, j = r;
  while(i < j){
    while(j > i && A[j] >= tmp) j--;
    if(j >= i) A[i] = A[j];

    while(i < j && A[i] <= tmp) i++;
    if(i <= j) A[j] = A[i];

  }
  A[i] = tmp;
  if(i == N/2) return;
  else{
    if(i > N/2)
      quicksort(A, l, i-1, N);
    else
      quicksort(A, i+1, r, N);
  }
}
