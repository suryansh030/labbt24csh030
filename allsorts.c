#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}
void bubblesort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
void selectionsort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int smallIdx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallIdx])
            {
                smallIdx = j;
            }
        }
        swap(&a[i], &a[smallIdx]);
    }
}
void insertionsort(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int curr = a[i];
        int previous = i - 1;
        while (previous >= 0 && a[previous] > curr)
        {
            a[previous + 1] = a[previous];
            previous--;
        }
        a[previous + 1] = curr;
    }
}
void merge(int a[], int st, int mid, int end)
{
    int temp[100];
    int i = st, j = mid + 1, k = st;
    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    for (i = st; i <= end; i++)
    {
        a[i] = temp[i];
    }
}
int mergesort(int a[], int st, int end)
{
    int mid = st + (end - st) / 2;
    if (st < end)
    {
        mergesort(a, st, mid);
        mergesort(a, mid + 1, end);
        merge(a, st, mid, end);
    }
}


int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("enter 1 for bubble sort,2 for insertion sort,3 for merge sort,4 for selection sort");
    int choice;
    scanf("%d",&choice);

    if(choice==2){
        insertionsort(arr,n);
    }
    else if(choice==3){
        mergesort(arr, 0, n - 1);
    }
    else if(choice==4){
        selectionsort(arr, n);
    }
    else{
        bubblesort(arr,n);
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}