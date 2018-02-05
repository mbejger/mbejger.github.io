#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{

  int nthreads, tid;

  // Each thread has a private copy of the number of threads 
  // and its own number
  #pragma omp parallel private(nthreads, tid)
  {

    nthreads = omp_get_num_threads();

    // Obtain thread number
    tid = omp_get_thread_num();
    printf("'Hello, World!' from thread %d\n", tid);

    // Thread no. 0 does additional work
    if (tid == 0) 
    {
      nthreads = omp_get_num_threads();
      printf("Number of threads = %d\n", nthreads);
    }

  } // End of parallel region 

  return 0; 

}
