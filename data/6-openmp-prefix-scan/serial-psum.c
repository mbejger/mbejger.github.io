#include <stdio.h>
#include <string.h>

#define N 8

int main(int argc, char ** argv)
{
  int sum[N], a[N];
  int i;

  for(i=0; i<N; i++) 
    a[i] = i+1; 

  sum[0] = 0;

  for(i = 1; i < N; i++)
      sum[i] = sum[i-1] + a[i-1];

  for(i = 0; i < N; i++)
    printf("a[%d] = %d, sum[%d] = %d\n", i, a[i], i, sum[i]);

  return 0;

}

