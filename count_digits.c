#include<stdio.h>
#include<math.h>
int main()
{
  int n,arr[100],i,temp,d,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      sum=0;
      temp=arr[i];
      if(arr[i]<0)
      {
          arr[i]=abs(arr[i]);
      }
      if(arr[i]==0)
      {
          sum=1;
      }
      while(arr[i]>0)
      {
          d=arr[i]%10;
          sum++;
          arr[i]/=10;
      }
  
      printf("%d ",sum);
  }
  
      
  
}