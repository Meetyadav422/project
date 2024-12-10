Question 12
//WAP to implement delete-Front, any position in between & end in an array. Print the array before delete & after delete.
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deleteAtPosition(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    printf("Array before deletions: ");
    printArray(arr, size);
    deleteAtPosition(arr, &size, 0);
    printf("Array after deleting from the front: ");
    printArray(arr, size);
    deleteAtPosition(arr, &size, 2);
    printf("Array after deleting from position 2: ");
    printArray(arr, size);
    deleteAtPosition(arr, &size, size - 1);
    printf("Array after deleting from the end: ");
    printArray(arr, size);

    return 0;
}
