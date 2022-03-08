#include<stdio.h>
int main()
{
	unsigned long int a,i;
	scanf("%lu",&a);
	if(a>=1&&a<=10000)
	{
	    i=0;
    	X:i++;
    	printf("%lu ",i);
	    if(i<a)
	    {
	    	goto X;
	    }
	}
	else
	{
	    printf("The Number Series is Not Possible Print");
	}
}