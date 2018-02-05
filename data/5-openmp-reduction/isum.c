#include <stddef.h>  // for size_t

double sum(const double *a, size_t n)
{
    double total=0.;
    size_t i;

    for (i = 0; i < n; i++) {
        total += a[i];
    }
    return total;
}
