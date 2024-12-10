Question 4
// WAP to find Who & how many students have scored 99 in an array Marks. 
#include <stdio.h> 
int main() { 
int marks[] = {99,56,67,89,99}; 
int n = 5, count = 0; 
for (int i = 0; i < n; i++) { 
if (marks[i] == 99) { 
printf("99 found at index %d\n", i); 
count++; 
} 
} 
printf("Total students with 99: %d", count); 
return 0; 
}
