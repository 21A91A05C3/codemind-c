#include<stdio.h>
int main()
{
    int n,rev=0,d,d1,rev1=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    while(rev)
    {
        d1=rev%10;
        rev=rev/10;
        if(d1%2==0)
        {
            continue;
        }
        else
        {
         printf("%d",d1*d1);   
        }
    }
}