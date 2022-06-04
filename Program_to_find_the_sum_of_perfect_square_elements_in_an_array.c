#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0,temp,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        b=pow(temp,0.5);
        if(b==sqrt(temp))
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}