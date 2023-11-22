#include <stdio.h>
void revstr(char name[],int n){
    if (name[n]!='\0'){
        revstr(name,n+1);
        printf("%c",name[n]);
    }
}
int main()
{
    char name[]="Divyansh Chauhan";
    revstr(name,0);
    return 0;
}
