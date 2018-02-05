#include <stdio.h>
#include <math.h> 
#include <omp.h>

int main()
{

    int i; 
    double a[10], maxval=0.; 
    
    for(i=0; i<10; i++)
        a[i] = 1 + i*sin(i);

    for(i=0; i<10; i++)
        printf("%f ", a[i]); 
    printf("\n"); 


    #pragma omp parallel for reduction(max : maxval)
    for( i=0;i<10; i++)
    {
        printf("thread id = %d and i = %d\n", omp_get_thread_num(), i);
        if(a[i] > maxval)
        {
            maxval = a[i];   
        }
    }
   
    printf("\nmaxval = %f\n", maxval);

  return 0; 

}
