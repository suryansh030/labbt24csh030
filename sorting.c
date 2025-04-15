#include <stdio.h>



void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}




void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubble_sort(int arr[],int n){
    
    int i,j;

    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }


}


void insertion_sort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
}


void selection_sort(int arr[],int n){
    // get the ize of the array  
 int i,min,j;
 
 for(i=0;i<n-1;i++){
     min=i;
     for(j=i;j<n;j++){
        if(arr[j]<arr[min]){
             
            min=j;
        }
         
     }
     swap(&arr[i],&arr[min]);



 }
}














int main(){
    
    int arr[] = {64, 25, 13, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    insertion_sort(arr,n);
    
    printf("Sorted array: \n");
    printArray(arr, n);

















    return 0;
}   
