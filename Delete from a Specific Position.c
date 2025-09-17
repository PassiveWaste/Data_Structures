#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        printf("Deleted element: %d\n", arr[pos - 1]);

        // Shift elements left
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
