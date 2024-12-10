
Question 5
// WAP to find sum of all scores in Marks array. 
#include <stdio.h> 
int main() { 
int marks[] = {99,56,67,89,99}; 
int n = 5, sum = 0; 
for (int i = 0; i < n; i++) { 
sum += marks[i]; 
} 
printf("Sum of all scores: %d", sum); 
return 0; 
}
