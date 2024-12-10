
Question 6
// WAP to find average score of the Marks array. 
#include <stdio.h> 
int main() { 
int marks[] = {99,56,67,89,99}; 
int n = 5, sum = 0; 
for (int i = 0; i < n; i++) { 
sum += marks[i]; 
} 
float average = sum / (float)n; 
printf("Average score: %.2f", average); 
return 0; 
}
