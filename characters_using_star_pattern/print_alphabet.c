#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphabetA(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if (((col == 0 || col == height / 2) && row != 0) || (row == 0 && col != 0 && col != height / 2) || (row == height / 2))
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
void alphabetB(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0) || (row == 0 && col != height / 2) || (row == height / 2 && col != height / 2) || (row == height - 1 && col != height / 2) || (col == height / 2 && (row >= 1 && row < height / 2)) || (col == height / 2 && (row > height / 2 && row < height - 1)))
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
void alphabetC(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0 && (row != 0 && row != height - 1)) || (row == 0 && col != 0) || (row == height - 1 && col != 0))
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
void alphabetD(int height)
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0) || ((row == 0 || row == height - 1) && (col != height / 2)) || (col == height / 2 && (row != 0 || row != height - 1)))
            {
                printf("* ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void alphabetE(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0) || (row == 0) || (row == height / 2) || (row == height - 1))
            {
                printf("* ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n");
}
void alphabetF(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0) || (row == 0) || (row == height / 2))
            {
                printf("* ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n");
}
void alphabetG(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if ((row == 0 && col != 0) || (col == 0 && row != 0 && row <= height - 3) || (row == height - 2 && col < height / 2 - 1 && col != 0) || col == height / 2 - 1 && (row >= height / 2 && row <= height - 2) || (row == height / 2 && col >= height / 2) || (col == height - 1 && row > height / 2))
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
void alphabetH(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if (col == 0 || col == height / 2 || row == height / 2)
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
void alphabetI(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if (row == 0 || row == height - 1 || col == height / 4)
            {
                printf("*");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
void alphabetJ(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if (row == 0 || (col == height / 2 && row != height - 1) || (row == height - 1 && (col > 0 && col < height / 2)) || col == 0 && (row >= height / 2 && row <= height - 2))
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
void alphabetK(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if ((col == 0) || (row + col == height / 2 + 2) || (row - col == height / 2))
            {
                printf("*");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
void alphabetL(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (col == 0 || row == height - 1)
            {
                printf("* ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void alphabetM(int height)
{
    if (height % 2 == 0)
    {
        printf("\n");
        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col <= height; col++)
            {
                if ((col == 0) || (col == height) || (row == col && row <= height / 2) || (row + col == height && col >= height / 2 + 1))
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
    else
    {
        printf("\n");
        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col < height; col++)
            {
                if ((col == 0) || (col == height - 1) || (row == col && row <= height / 2) || (row + col == height - 1 && col >= height / 2))
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
}
void alphabetN(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if ((col == 0) || (col == height - 1) || (row == col))
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
void alphabetO(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (((row == height - 1 || row == 0) && col != 0 && col != height - 1) || ((col == 0 || col == height - 1) && row != 0 && row != height - 1))
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
void alphabetP(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0) || ((row == 0 || row == height / 2) && col != height / 2) || (col == height / 2 && row > 0 && row < height / 2))
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
void alphabetQ(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if ((col == 0 && row != 0 && row < height / 2 + 1) || ((row == 0 || row == height / 2 + 1) && col != 0 && col <= height / 2 + 1) || ((col == height / 2 + 2) && row != 0 && row < height / 2 + 1) || (row + 1 == col && row >= height / 2 - 1))
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
void alphabetR(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height / 2; col++)
        {
            if ((col == 0) || ((row == 0 || row == height / 2) && col != height / 2) || (col == height / 2 && row > 0 && row < height / 2) || (row - col == height / 2 && row >= height / 2))
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
void alphabetS(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if ((row == 0 && col != 0) || (row == height / 2 && col != height - 1 && col != 0) || (row == height && col != height - 1) || (col == 0 && row > 0 && row < height / 2) || (col == height - 1 && row > height / 2 && row < height))
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
void alphabetT(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (row == 0 || col == height / 2)
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
void alphabetU(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (((col == 0 || col == height - 1) && row != height - 1) || ((row == height - 1) && (col != 0) && (col != height - 1)))
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
void alphabetV(int height)
{
    printf("\n");
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= 2 * height; col++)
        {
            if ((row == col || row + col == 2 * height))
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
void alphabetW(int height)
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
void alphabetX(int height)
{
    if (height % 2 == 0)
    {

        printf("\n");
        for (int row = 0; row <= height; row++)
        {
            for (int col = 0; col <= height; col++)
            {
                if ((row == col || row + col == height))
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
    else
    {

        printf("\n");
        for (int row = 0; row <= height; row++)
        {
            for (int col = 0; col <= height+1; col++)
            {
                if ((row == col || row + col == height+1))
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
}
void alphabetY(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if ((row == col && row <= height / 2) || row + col == height)
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
void alphabetZ(int height)
{
    printf("\n");
    for (int row = 0; row <= height; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if (row == 0 || row == height || row + col == height)
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
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    int n;
    printf("Enter the height of character : ");
    scanf("%d", &n);
    switch (ch)
    {
    case 'a':
        alphabetA(n);
        break;
    case 'A':
        alphabetA(n);
        break;
    case 'b':
        alphabetB(n);
        break;
    case 'B':
        alphabetB(n);
        break;
    case 'c':
        alphabetC(n);
        break;
    case 'C':
        alphabetC(n);
        break;
    case 'd':
        alphabetD(n);
        break;
    case 'D':
        alphabetD(n);
        break;
    case 'e':
        alphabetE(n);
        break;
    case 'E':
        alphabetE(n);
        break;
    case 'f':
        alphabetF(n);
        break;
    case 'F':
        alphabetF(n);
        break;
    case 'g':
        alphabetG(n);
        break;
    case 'G':
        alphabetG(n);
        break;
    case 'h':
        alphabetH(n);
        break;
    case 'H':
        alphabetH(n);
        break;
    case 'i':
        alphabetI(n);
        break;
    case 'I':
        alphabetI(n);
        break;
    case 'j':
        alphabetJ(n);
        break;
    case 'J':
        alphabetJ(n);
        break;
    case 'k':
        alphabetK(n);
        break;
    case 'K':
        alphabetK(n);
        break;
    case 'l':
        alphabetL(n);
        break;
    case 'L':
        alphabetL(n);
        break;
    case 'm':
        alphabetM(n);
        break;
    case 'M':
        alphabetM(n);
        break;
    case 'n':
        alphabetN(n);
        break;
    case 'N':
        alphabetN(n);
        break;
    case 'o':
        alphabetO(n);
        break;
    case 'O':
        alphabetO(n);
        break;
    case 'p':
        alphabetP(n);
        break;
    case 'P':
        alphabetP(n);
        break;
    case 'q':
        alphabetQ(n);
        break;
    case 'Q':
        alphabetQ(n);
        break;
    case 'r':
        alphabetR(n);
        break;
    case 'R':
        alphabetR(n);
        break;
    case 's':
        alphabetS(n);
        break;
    case 'S':
        alphabetS(n);
        break;
    case 't':
        alphabetT(n);
        break;
    case 'T':
        alphabetT(n);
        break;
    case 'u':
        alphabetU(n);
        break;
    case 'U':
        alphabetU(n);
        break;
    case 'v':
        alphabetV(n);
        break;
    case 'V':
        alphabetV(n);
        break;
    case 'w':
        alphabetW(n);
        break;
    case 'W':
        alphabetW(n);
        break;
    case 'x':
        alphabetX(n);
        break;
    case 'X':
        alphabetX(n);
        break;
    case 'y':
        alphabetY(n);
        break;
    case 'Y':
        alphabetY(n);
        break;
    case 'z':
        alphabetZ(n);
        break;
    case 'Z':
        alphabetZ(n);
        break;

    default:
        break;
    }
    return 0;
}