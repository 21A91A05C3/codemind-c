#include<stdio.h>
int main()
{
    int n,i,arr[100],k,a,c=0,e,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
       if(arr[i]>a)
       {
           c+=2;
       }
       else
       {
           d+=1;
       }
    }
    e=d+c;
    printf("%d",e);
}