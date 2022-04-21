#include<stdio.h>
int main()
{
    int n,m,i,HCF;
    scanf("%d%d",&n,&m);
    for(i=1;i<n || i<m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            HCF=i;
        }
    }
    printf("%d",HCF);
}