#include <stdio.h>
#include <stdlib.h>
#include "carray_util.h"

int main(void)
{
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {5, 4, 3, 2, 1};
    int *a = malloc(size_of_arr(a1) + size_of_arr(a2));
    merge_arr(a1, size_of_arr(a1), a2, size_of_arr(a2), a);

    int i;
    printf("merged array: ");
    for (i = 0; i < size_of_arr(a1) + size_of_arr(a2); i++) {
        printf("%d", a[i]);
    }
    printf("\n");
}
