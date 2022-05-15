#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i*j==n)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("-1");
}