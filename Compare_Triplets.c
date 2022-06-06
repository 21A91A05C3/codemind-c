#include<stdio.h>
int main()
{
    int arr[100],arr1[100],i,j,a=0,b=0;
     for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
      for(i=0;i<3;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for(i=0;i<3;i++)
    {
        if(arr[i]>arr1[i])
        {
            a++;
        }
        else if(arr[i]<arr1[i])
        {
            b++;
        }
        
    }
    printf("%d %d",a,b);
}