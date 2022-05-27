#include<stdio.h>
int main()
{
    int n,m,arr[100][100],i,j,r,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2==0)
            {
                sum=sum+arr[i][j];
            }
            else
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum);
}