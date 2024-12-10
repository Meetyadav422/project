Question 10
//WAP to count prime numbers in an array.
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {3, 5, 8, 13, 17, 20, 23, 25, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    int primeCount = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }
    printf("Number of prime numbers in the array: %d\n", primeCount);
    return 0;
}
