#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define CHUNKSIZE 10
#define N 100

// Dynamical scheduling of work among a group of threads, 
// each given a CHUNKSIZE of work repeatedly 
// until the job is done 

int main (int argc, char *argv[]) 
{

  int nthreads, tid, i, chunk;
  double a[N], b[N];

  for (i=0; i < N; i++)
    a[i] = (double)i;

  chunk = CHUNKSIZE;

  #pragma omp parallel shared(a,b,nthreads,chunk) private(i,tid)
  {
    tid = omp_get_thread_num();

    if (tid == 0) {
      nthreads = omp_get_num_threads();
      printf("Number of threads = %d\n", nthreads);

    }

    printf("Thread %d starting...\n",tid);

    #pragma omp for schedule(dynamic,chunk)
    for (i=0; i<N; i++) {

      b[i] = a[i]*a[i];

      printf("Thread %d: c[%d]= %f\n",tid,i,b[i]);

    }

  }

  return 0;  

}


