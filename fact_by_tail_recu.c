#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fact(int n,int res){
    if (n==0||n==1)
    {
        return res;
    }
    else{
        return fact(n-1,n*res);
    }
    
}
int main()
{
    printf("%d",fact(7,1));
    return 0;
}
