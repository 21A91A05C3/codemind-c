#include<stdio.h>
int main()
{
    int n,s=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        d=temp%10;
        s=s+d;
        temp=temp/10;
    }
    if(n%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}