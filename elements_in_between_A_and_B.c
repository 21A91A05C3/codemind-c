#include<stdio.h>
int main()
{
    int n,arr[100],m,k,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
     for(i=0;i<n;i++)
    {
        if(arr[i]>=m && arr[i]<=k)
        {
                 c++;
         
              printf("%d ",arr[i]);
         
        }
    }
    if(c==0)
    {
        printf("-1");
    }
} 