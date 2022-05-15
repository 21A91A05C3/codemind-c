#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,arr[100],c=0,sum=0,i,temp,d;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        if(arr[i]<0)
        {
            arr[i]=abs(arr[i]);
        }
        if(arr[i]==0)
        {
            c=1;
        }
        while(arr[i]>0)
        {
            d=arr[i]%10;
            c++;
            arr[i]/=10;
        }
        if(c==m)
        {
            sum++;
        }
    }
    printf("%d",sum);
    
    
}