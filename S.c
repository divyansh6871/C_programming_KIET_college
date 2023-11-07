#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabetS(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col < height ; col++)
        {
            if ((row==0&&col!=0)||(row==height/2&&col!=height-1&&col!=0)||(row==height&&col!=height-1)||(col==0&&row>0&&row<height/2)||(col==height-1&&row>height/2&&row<height))
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
    alphabetS(10);
    return 0;
}