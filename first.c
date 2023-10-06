#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum of these numbers is : %d\n",a+b);
    printf("Product of these numbers is : %d\n",a*b);
    printf("Difference of these numbers is : %d\n",a-b);
    printf("Quotient when a is divided by b is : %d\n",a/b);
    printf("Remainder when a is divided by b is : %d\n",a%b);
    return 0;
}