Question 4
1st method
// WAP to accept two integer numbers and swap them using 4 different methods
//1st method using third variable
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swaped numbers a=%d,b=%d",a,b);

    return 0;
}

2nd method
// WAP to accept two integer numbers and swap them using 4 different methods
//2nd method without third variable
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swaped numbers a=%d,b=%d",a,b);

    return 0;
}

3rd method
// WAP to accept two integer numbers and swap them using 4 different methods
//3rd mehod using bitwise operator
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swaped numbers a=%d,b=%d",a,b);

    return 0;
}

4th method
// WAP to accept two integer numbers and swap them using 4 different methods
//4th mehod using multiplication and division
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("swaped numbers a=%d,b=%d",a,b);

    return 0;
}
