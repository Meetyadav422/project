Question 3
//WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include <stdio.h>

int main() {
    int a,b,num;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    
    num=~b;
    num=num+1;
    
    num=a+num;
    
    printf("\nresult=%d",num);

    return 0;
}
