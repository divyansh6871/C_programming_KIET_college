
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number and I would tell you that wether it is even or odd : ");
    scanf("%d",&n);
    if(n%2==0)
    printf("The number you entered is EVEN!");
    else
    printf("THe number you entered is ODD!");

    return 0;
}
