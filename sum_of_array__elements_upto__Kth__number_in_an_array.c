#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100],i,sum=0,c=0,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	    
		for(i=0;i<k;i++)
	{
	   
	        sum=sum+arr[i];
	    
	}
	printf("%d",sum);
}