// Online C compiler to run C program online
#include <stdio.h>

int partition(int *arr, int start, int end) {
    int pivot = arr[end]; 
    int i = start - 1;   

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++; 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }


    int temp = arr[i + 1];
    arr[i + 1] = arr[end]; 
    arr[end] = temp;

    return i + 1; 
}

void quickSort(int *arr, int start, int end) {
    if (start < end) {
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1); 
        quickSort(arr, pivotIndex + 1, end);  
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}