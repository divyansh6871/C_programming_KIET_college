#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char string[]="Divyansh";
    char * name=string;
    char ** doublename=&name;
    int i=0;
    while (*(*(doublename)+i)!='\0')
    {
        printf("%c",*(*(doublename)+i));
        i++;
    }
    
    return 0;
}