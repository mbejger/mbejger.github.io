#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 8

int main()
{

  int sum[2][N], a[N]; 
  int log_of_N = (int)ceil(log(N)/log(2));

  int i, j;
  int in = 1, out = 0;

  sum[0][0] = sum[1][0] = 0; 

  for(i = 0; i < N; i++) { 
    a[i] = i+1;
    sum[0][i+1] = a[i]; 
    sum[1][i+1] = 0; 

  } 

  for(i = 1; i <= log_of_N; i++)
  {
    // 2^{i-1}
    int twopim1 = 1 << (i-1);

    out = 1 - out;
    in = 1 - out;

    #pragma omp parallel for private(j) shared(sum, in, out)
    for(j = 0; j < N; j++)
    {
      if(j >= twopim1)
        sum[out][j] = sum[in][j] + sum[in][j - twopim1];
      else
        sum[out][j] = sum[in][j];
    }

  }

  for(i = 0; i < N; i++)
    printf("a[%d] = %d, sum[%d] = %d\n", i, a[i], i, sum[out][i]);

  return 0;

}

