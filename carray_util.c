#include <string.h>
#include "carray_util.h"

void merge_arr(int *a1, size_t a1_size, int *a2, size_t a2_size, int *a)
{
    memmove(a, a1, sizeof(int) * a1_size);
    memmove(&a[a1_size], a2, sizeof(int) * a2_size);
}
