#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabetU(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height ; col++)
        {
            if (((col==0||col==height-1)&&row!=height-1)||((row==height-1)&&(col!=0)&&(col!=height-1)))
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
    alphabetU(8);
    return 0;
}