#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabetZ(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col <= height ; col++)
        {
            if (row==0||row==height||row+col==height)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    alphabetZ(8);
    return 0;
}