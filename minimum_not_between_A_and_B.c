#include<stdio.h>
int main()
{
    int n,arr[100],i,a,b,d=0,min=100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                d++;
            }
        }
    }
    if(d!=0)
    {
        printf("%d",min);
    }
    else
    {
        printf("-1");
    }
}