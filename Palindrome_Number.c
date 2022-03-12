#include<stdio.h>
int main()
{
    int i,n,rev,temp,t,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    { 
        scanf("%d",&n);
        rev=0;
        temp=n;
        while(n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if(temp!=rev)
        {
            printf("False
");
        }
        else
        {
            printf("True
");
        }
        
    }
    
}