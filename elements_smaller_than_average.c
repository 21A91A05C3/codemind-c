#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { 
        sum=sum+arr[i];
    }
    k=sum/n;
    for(i=0;i<n;i++)
    { 
        if(arr[i]<=k)
        c++;
    }
    printf("%d",c);
}
    
    