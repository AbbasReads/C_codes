#include <stdio.h>

int findRightPos(int arr[], int piv, int left, int right) {
    while (left <= right) {
        // Move left pointer to the right until an element greater than the pivot is found
        while (left <= right && arr[left] <= arr[piv]) {
            left++;
        }
        // Move right pointer to the left until an element smaller than or equal to the pivot is found
        while (left <= right && arr[right] > arr[piv]) {
            right--;
        }
        // Swap left and right elements if left is still less than right
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    // Place the pivot element at its correct sorted position
    int temp = arr[piv];
    arr[piv] = arr[right];
    arr[right] = temp;
    
    return right;
}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivotIndex = findRightPos(arr, left, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int main() {
    int l;
    printf("Enter the number of elements: ");
    scanf("%d", &l);

    // Handle cases where the input size is invalid
    if (l <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[l]; // Dynamic array based on input size

    // Input the array elements
    printf("Enter %d elements:\n", l);
    for (int i = 0; i < l; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform quicksort
    quickSort(arr, 0, l - 1);

    // Output the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
