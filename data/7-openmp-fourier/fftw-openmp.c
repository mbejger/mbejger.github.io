#include <fftw3.h>
#include <omp.h>
#include <math.h>

#include "timer.h" 

#define N 16777216

int main() {

    int i; 
    int fftw_init_threads(void);
    int nthreads = omp_get_max_threads(); 

    fftw_complex *in, *out;

    in = fftw_malloc(N*sizeof(fftw_complex));
    out = fftw_malloc(N*sizeof(fftw_complex));

    fftw_plan plan; 

    fftw_plan_with_nthreads(nthreads);
    printf("nthreads: %d\n", nthreads); 

    plan = fftw_plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_ESTIMATE);

    for (i=0; i < N; ++i) {

        double th = (double)i/(double)N*M_PI;

        // real part
        in[i][0] = cos(13*th) + 0.5*cos(17*th);

        // imaginary part 
        in[i][1] = sin(13*th) + 0.5*sin(17*th);
    }

    struct timespec tstart = get_current_time(CLOCK_REALTIME), tend;

    fftw_execute(plan);

    tend = get_current_time(CLOCK_REALTIME);
    double time_elapsed = get_time_difference(tstart, tend);

    for (i=0; i<128; ++i)
      printf("%le %le\n", out[i][0], out[i][1]);

    printf("Time elapsed: %e s\n", time_elapsed);

    // Estimate the numbers of additions, 
    // multiplications and fused multiply-add operations  
    double add=0, mul=0, fma=0;
    fftw_flops(plan, &add, &mul, &fma);

    printf("fftw_flops: add %.0f, mul %.0f, fma %.0f\n", add, mul, fma);

    fftw_destroy_plan(plan);
    void fftw_cleanup_threads(void);

    fftw_free(in);
    fftw_free(out);

    return 0;
    
}

