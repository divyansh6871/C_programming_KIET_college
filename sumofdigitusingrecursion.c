#include <stdio.h>
int sum(int n,int total){
    if(n>0){
        total=total+n%10;
        n=n/10;
        if(n==0)
            return total;
        sum(n,total);
    }
    else
        return 0;
}
int main()
{
    printf("%d",sum(167,0));
    return 0;
}
