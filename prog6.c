
Question 6
// WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include <stdio.h> 
int main() { 
int x = 15, y = 67; 
if (x > 0 && y > 0) 
printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y); 
else if (x < 0 && y > 0) 
printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y); 
else if (x < 0 && y < 0) 
printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y); 
else if (x > 0 && y < 0) 
printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y); 
else 
printf("The coordinate point (%d,%d) lies on the origin or an axis.\n", x, y);
return 0;
}
