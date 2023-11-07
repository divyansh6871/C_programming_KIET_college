#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabetX(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col <= height ; col++)
        {
            if ((row==col||row+col==height))
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
    alphabetX(8);
    return 0;
}