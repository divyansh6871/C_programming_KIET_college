#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabet(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height ; col++)
        {
            if ((col==0)||(col==height-1)||(row==col&&row<=height/2)||(row+col==height-1&&col>=height/2 ))
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
    alphabet(9);
    return 0;
}