#include <stdio.h>

int main()
{
    char c;
    printf("enter a character : ");
    scanf("%c",&c);
    int a=c;
    if(a>=49 && a<=57)
    printf("True");
    else
    printf("False");
    return 0;
}
