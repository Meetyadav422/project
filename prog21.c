Question 11
//WAP to implement Insert -Front, any position in between & end in an array. Print the array before insert & after insert.
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertAtPosition(int arr[], int *size, int position, int value) {
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("Array before insertions: ");
    printArray(arr, size);
    insertAtPosition(arr, &size, 0, 5);
    printf("Array after inserting at the front: ");
    printArray(arr, size);
    insertAtPosition(arr, &size, 3, 25);
    printf("Array after inserting at position 3: ");
    printArray(arr, size);
    insertAtPosition(arr, &size, size, 60);
    printf("Array after inserting at the end: ");
    printArray(arr, size);

    return 0;
}
