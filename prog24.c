Question 14
//. Given an array of n integers. The task is to print the duplicates in the given array. 
#include <stdio.h>
void printDuplicates(int arr[], int size) {
    int isDuplicateFound = 0; 
    int visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = 0; 
    }
    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) { 
            int count = 1; 
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1; 
                }
            }
            if (count > 1) {
                printf("%d ", arr[i]);
                isDuplicateFound = 1;
            }
        }
    }
    if (!isDuplicateFound) {
        printf("-1");
    }

    printf("\n");
}

int main() {
    int arr1[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Duplicates in the first array: ");
    printDuplicates(arr1, size1);

    int arr2[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Duplicates in the second array: ");
    printDuplicates(arr2, size2);

    return 0;
}
