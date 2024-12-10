
Question 3
// WAP to find who scored first “99” in an array marks. 
#include <stdio.h> 
int main() { 
int marks[] = {99,56,67,89,99}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
if (marks[i] == 99) { 
printf("First 99 found at index %d", i); 
break; 
} 
} 
return 0; 
}
