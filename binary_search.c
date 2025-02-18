#include <stdio.h>
int binarySearch(int arr[], int size, int number) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 
        if (arr[mid] == number) {
            return mid;
        }

        if (arr[mid] < number) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {0, 3, 5, 9, 10, 19, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number;

    printf("Enter the number to search: ");
    scanf("%d", &number);

    int result = binarySearch(arr, size, number);

    if (result != -1) {
        printf("Element is present at index %d.\n", result);
    } else {
        printf("Element is not present in the array.\n");
    }

    return 0;
}   