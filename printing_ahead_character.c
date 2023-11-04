#include <stdio.h>

int main()
{
    char ch;
    int a,l;
    printf("Enter your character : ");
    scanf("%c",&ch);
    a=ch;
    if(a>=97&&a<=122){
        for (int i=a;i<=122;i++){
            printf("%c\n",i);
        }
    }
    else if(a>=65&&a<=90){
        for (int i=a;i<=90;i++){
            printf("%c\n",i);
        }
    }
    else
        printf("you have not enetered a character.");
 
    
    return 0;
}
