#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,n,i,a[100],j,d,s=0,b[100],k;
    scanf("%d",&x);
    for(j=0;j<x;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n-1;i++)
        {
           scanf("%d",&a[i]);  
        }
        d=(n*(n+1))/2;
        s=0;
        for(i=0;i<n-1;i++)
        {
           s=s+a[i];
        }
        k=abs(d-s);
        printf("%d
",k);
       
    }
}