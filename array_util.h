#define SIZE_OF_ARR(arr) (sizeof(arr) / sizeof(arr[0]))

/**
 * Merge 2 integer arrays
 * @args
 */
void merge(int *a1, size_t a1_size, int *a2, size_t a2_size, int *merged_arr)
{
    memmove(merged_arr, a1, sizeof(int) * a1_size);
    memmove(&merged_arr[a1_size], a2, sizeof(int) * a2_size);
}
