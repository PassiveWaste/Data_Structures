#include <stdio.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize) {
    // Outer loop iterates from the first element to the second-to-last
    for (int i = 0; i < numsSize - 1; i++) {
        // Inner loop iterates from the element after 'i' to the end
        for (int j = i + 1; j < numsSize; j++) {
        // If we find any two elements that are the same, we have a duplicate
            if (nums[i] == nums[j]) {
                return true; // Found a duplicate
            }
        }
    }
    // If the loops complete, no duplicates were found
    return false;
}