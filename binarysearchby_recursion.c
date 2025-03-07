#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binary_search(arr, left, mid - 1, target);

        return binary_search(arr, mid + 1, right, target);
    }

    return -1;
}

int main() {
    int n, target, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    result = binary_search(arr, 0, n - 1, target);

    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in array\n");

    return 0;
}
