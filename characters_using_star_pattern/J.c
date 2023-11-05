#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabet(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height ; col++)
        {
            if (row==0||(col==height/2&&row!=height-1)||(row==height-1&&(col>0&&col<height/2))||col==0&&(row>=height/2&&row<=height-2))
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
    alphabet(8);
    return 0;
}