#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,sum=0,sub=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
        else if(arr[i]!=0)
        sub=sub+arr[i];
    }
    k=abs(sub-sum);
    
    printf("%d",k);
}