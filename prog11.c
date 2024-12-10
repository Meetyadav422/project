Question 1
// WAP to increase every student mark by 5 & then print the updated array. 
#include <stdio.h> 
int main() { 
int marks[] = {45,56,43,23,11}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
marks[i] += 5; 
} 
for (int i = 0; i < n; i++) { 
printf("%d ", marks[i]); 
} 
return 0; 
}
