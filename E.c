#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabet(int height)
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col==0)||(row==0)||(row==height/2)||(row==height-1))
            {
                printf("* ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
int main()
{
    alphabet(8);
    return 0;
}