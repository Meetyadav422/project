Question2
//WAP to read two integers and print their HCF (Highest Common Factor)
#include <stdio.h>

int main() {
    int i,a,b,hcf;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    printf("%d",hcf);

    return 0;
}
