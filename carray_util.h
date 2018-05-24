#ifndef _CARRAY_UTIL_H_
#define _CARRAY_UTIL_H_

#define size_of_arr(a) (sizeof(a) / sizeof(a[0]))

#include <stdio.h>

/**
 * Merge 2 integer arrays
 * @args
 */
extern void merge_arr(int *a1, size_t a1_size, int *a2, size_t a2_size, int *a);

#endif
