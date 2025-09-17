#include <stdio.h>
int main() {
    int arr[100], n, num, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert at beginning: ");
    scanf("%d", &num);

    // Shift elements right
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}