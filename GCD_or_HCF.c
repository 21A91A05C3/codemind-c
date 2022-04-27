#include<stdio.h>
int main()
{
    int n,m,i,min,hcf=1;
    scanf("%d %d",&n,&m);
    min=m>n?m:n;
    for(i=min;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
       {
           hcf=i;
        break;
       }
    }
    printf("%d",hcf);
}