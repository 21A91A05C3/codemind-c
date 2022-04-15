#include<stdio.h>
int main()
{
    int n,temp,fact,rem,sum=0,i;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1,fact=1;//145
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}