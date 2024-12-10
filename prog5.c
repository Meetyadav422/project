
Question 5
// WAP to check whether number is Perfect Number or not
#include <stdio.h>

int main() {
    int n,num,i;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            num=num+i;
        }
    }
    if(num==n)
    printf("perfect number");
    else
    printf("not perfect number");

    return 0;
}
