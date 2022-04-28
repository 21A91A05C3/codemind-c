#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100],i,sum=0,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
	    if(arr[i]%2==0)
	    {
	        printf("%d ",arr[i]);
	    }
	}
		for(i=0;i<n;i++)
	{
	    if(arr[i]%2!=0)
	    {
	        printf("%d ",arr[i]);
	    }
	}
}
	