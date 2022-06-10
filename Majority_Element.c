#include<stdio.h>
int main()
{
    int n,arr[200],i,c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
    
        if (c>n/2)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}