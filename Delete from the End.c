#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(n <= 0) {
        printf("Array is empty, deletion not possible.\n");
    } else {
        printf("Deleted element: %d\n", arr[n-1]);
        n--; // Just reduce size

        printf("Array after deletion: ");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}

