#include <stdio.h>

void Exponential_moving_average(int arr[], int n, int size) {
    int R[n - size + 1];
    float EMA = arr[0]; 
    float a = 2.0 / (size + 1); 
    
    for (int i = 1; i < n; i++) {
        EMA = (arr[i] * a) + EMA * (1 - a);
        if (i >= size - 1) {
            R[i - size + 1] = EMA;
        }
    }
    for (int i = 0; i < n - size + 1; i++) {
        printf("%d ", R[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    int size;
    printf("Enter the size of the window: ");
    scanf("%d", &size);

    Exponential_moving_average(arr, n, size);
    return 0;
}