#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100][100],r,c,i,j,sum=0,sum1=0,k;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
    }
   /* for(i=0;i<r;i++)
	{                   
		for(j=0;j<c;j++)
		{
		  if(i==j)
		  {
		  	sum=sum+arr[i][j];
		  }
		}
	}*/
	for(i=0;i<r;i++)
	{                   
		for(j=0;j<c;j++)
		{
		  if(i==j)
		  {
		  	sum=sum+arr[i][j];
		  }
		  if(i+j==r-1 && i!=j)
		  {
		  	sum1=sum1+arr[i][j];
		  }
		}
	}
	k=sum1+sum;
	printf("%d",k);
}