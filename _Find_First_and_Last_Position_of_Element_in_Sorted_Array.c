#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,i,k,sum=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%d ",i);
            sum++;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==k)
        {
            printf("%d",i);
            break;
        }
    }
    if(sum==0)
    {
        printf("-1 -1");
    }
    return 0;
}