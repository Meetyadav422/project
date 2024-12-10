Question 9
//WAP to print following Pyramid: 
#include <stdio.h>
void printPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf(" ");
        for (int j = 0; j < i; j++) {
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }
}
int main() {
    int rows = 5; 
    printPyramid(rows);
    return 0;
}
