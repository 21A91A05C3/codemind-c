#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    c=a+b;
    for(i=1;i<n-1;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    
}