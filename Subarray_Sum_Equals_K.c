#include<stdio.h>
int main()
{
    int n,m,i,arr[100],j,k=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
       
            if(sum==m)
            {
                k++;
            }
        }
    }
    printf("%d",k);
}