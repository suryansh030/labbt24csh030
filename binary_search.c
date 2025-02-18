#include <stdio.h>


int binarySearch(int arr[], int size, int number) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2; 
        if (arr[mid] == number) {
            return mid;
        }

        if (arr[mid] < number) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 12, 16, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number;

    printf("Enter the number to search: ");
    scanf("%d", &number);

    int result = binarySearch(arr, size, number);

    if (result != -1) {
        printf("Element is at index %d.\n", result);
    } else {
        printf("Element is not present.\n");
    }

    return 0;
}
#include <stdio.h>


int binarySearch(int arr[], int size, int number) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2; 
        if (arr[mid] == number) {
            return mid;
        }

        if (arr[mid] < number) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 12, 16, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number;

    printf("Enter the number to search: ");
    scanf("%d", &number);

    int result = binarySearch(arr, size, number);

    if (result != -1) {
        printf("Element is at index %d.\n", result);
    } else {
        printf("Element is not present.\n");
    }

    return 0;
}
