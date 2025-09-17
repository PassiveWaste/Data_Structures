#include <stdio.h>
int main() {
    int arr[100], n, pos, newVal, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to update (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        printf("Enter new value: ");
        scanf("%d", &newVal);

        printf("Element at position %d (%d) will be updated to %d\n", pos, arr[pos - 1], newVal);

        arr[pos - 1] = newVal;  // Update operation

        printf("Array after update: ");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
