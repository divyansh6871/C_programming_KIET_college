#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabetY(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col <= height ; col++)
        {
            if ((row==col&&row<=height/2)||row+col==height)
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
    alphabetY(8);
    return 0;
}