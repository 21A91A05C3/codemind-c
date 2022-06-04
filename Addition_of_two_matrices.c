#include<stdio.h>
int main()
{
    int i,j,arr[100][100],n,arr1[100][100],c[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
         scanf("%d",&arr[i][j]);
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
         scanf("%d",&arr1[i][j]);
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
         c[i][j]=arr[i][j]+arr1[i][j];
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
       {
         printf("%d ",c[i][j]);
       }
       printf("%d",c[i][j]);
       printf("
");
    }
    
    
    
}