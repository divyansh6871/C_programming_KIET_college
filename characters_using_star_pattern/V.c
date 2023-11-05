#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabet(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= 2*height ; col++)
        {
            if ((row==col||row+col==2*height))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    alphabet(8);
    return 0;
}