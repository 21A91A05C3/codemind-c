#include<stdio.h>
int main()
{
    int n,sum=0,temp,i,d;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        d=n%i;
        if(d==0)
        {
            sum=sum+i;
        }
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}