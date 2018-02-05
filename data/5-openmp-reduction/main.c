#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "timer.h"

#define N 10000000 // array length 

double sum(const double *, size_t);


int main()
{

    size_t i; 
    double *a = malloc(N * sizeof(double));

    if (a == NULL) {
        perror("malloc");
        return 1;
    }

    // fill the array a
    for (i = 0; i < N; i++) {
        a[i] = .000001;
    }

    struct timespec tstart = get_current_time(CLOCK_REALTIME), tend;

    printf("%f\n", sum(a, N));

    tend = get_current_time(CLOCK_REALTIME);
    double time_elapsed = get_time_difference(tstart, tend);
    printf("Time elapsed: %e s\n", time_elapsed);

    return 0;
}
