#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,arr[100],i,sum=0,c=0,j,sum1=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	    
		for(i=0;i<n/2;i++)
	{
	    
	        sum=sum+arr[i];
	   
	}
			for(i=n/2;i<n;i++)
	{
	    
	        sum1=sum1+arr[i];
	   
	}
	k=abs(sum1-sum);
	printf("%d",k);
	
}