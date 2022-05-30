#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100][100],r,c,i,j,sum=0,sum1=0,k;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&arr[i][j]);
		}
    }
	for(i=0;i<r;i++)
	{                   
		for(j=0;j<r;j++)
		{
		  if(i==j)
		  {
		  	sum=sum+arr[i][j];
		  }
		  if(i+j==r-1)
		  {
		  	sum1=sum1+arr[i][j];
		  }
		}
	}
	printf("Principal Diagonal:%d
",sum);
	printf("Secondary Diagonal:%d",sum1);
}