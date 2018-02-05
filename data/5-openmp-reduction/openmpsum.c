#include <stddef.h>  // for size_t

double sum(const double *a, size_t n)
{
    size_t i; 
    double total = 0.;

    #pragma omp parallel for reduction(+:total)
    for (i = 0; i < n; i++) {
        total += a[i];
    }
    return total;
}
