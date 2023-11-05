#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabet(int height)
{
    printf("\n");
    if (height % 2 == 1)
    {

        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col <= 3 * height - 2; col++)
            {
                if (row == col || (row + col == 2 * height - 2 && row >= height / 2) || (col - row == height && row >= height / 2) || row + col == 3 * height - 2)
                {
                    printf("* ");
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    else
    {
        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col <= 3 * height - 1; col++)
            {
                if (row == col || (row + col == 2 * height - 2 && row >= height / 2 - 1) || (col - row == height && row >= height / 2 - 1) || row + col == 3 * height - 2)
                {
                    printf("* ");
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    printf("\n");
}
int main()
{
    alphabet(9);
    return 0;
}