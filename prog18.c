Question 8

//. WAP to find maximum & minimum score in the Marks array. 
#include <stdio.h> 
int main() { 
int marks[] = {99,56,67,89,99}; 
int n = 5; 
int max = marks[0], min = marks[0]; 
for (int i = 1; i < n; i++) { 
if (marks[i] > max) { 
max = marks[i]; 
} 
if (marks[i] < min) { 
min = marks[i]; 
} 
} 
printf("Maximum score: %d\n", max); 
printf("Minimum score: %d", min); 
return 0; 
}

