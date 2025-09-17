/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Start from the last digit and add 1
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++; // No carry needed
            *returnSize = digitsSize;
            return digits; // Return same array
        }
        digits[i] = 0; // Carry to the next digit
        }
        // If all digits are 9 (e.g., 999 -> 1000), need extra space
        int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
        result[0] = 1; // First digit becomes 1
        for (int i = 1; i <= digitsSize; i++) {
            result[i] = 0;
        }
    *returnSize = digitsSize + 1;
    return result;
}