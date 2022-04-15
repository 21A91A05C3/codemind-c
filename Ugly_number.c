#include<stdio.h>
int main()
{
    int n,temp,x=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=1)
    {
        if(temp%2==0)
        {
            temp/=2;
        }
         else  if(temp%3==0)
        {
            temp/=3;
        }
         else if(temp%5==0)
        {
            temp/=5;
        }
        else
        {
            printf("Not Ugly Number");
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("Ugly Number");
    }
}