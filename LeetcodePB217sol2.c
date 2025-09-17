#include <stdlib.h>
#include <stdbool.h>
/**
* Comparison function for qsort. It's required to tell qsort how to
* compare two integer elements.
*/
int compareIntegers(const void* a, const void* b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;
    // Return -1, 0, or 1 based on the comparison
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}
bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return false;
}
    qsort(nums, numsSize, sizeof(int), compareIntegers);
    for (int i = 0; i < numsSize - 1; i++) {
    // If the current element is the same as the next one, we've found a duplicate.
        if (nums[i] == nums[i + 1]) {
            return true;
        }
        }
    return false;
}