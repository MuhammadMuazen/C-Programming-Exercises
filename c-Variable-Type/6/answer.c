#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main(void) {
    
    int size;

    printf("Input the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Input %d elements in the array:\n", size);
    for(int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    quickSort(arr, 0, size - 1);

    printf("After sorting the array are:\n");
    for(int i = 0; i < size; i++)
        printf("%d\n", arr[i]);

    return 0;
}