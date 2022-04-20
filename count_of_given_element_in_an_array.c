#include<stdio.h>
int search(int *arr,int n,int se)
{
    int j,c=0;
    for(j=0;j<n;j++)
    {
        if(arr[j]==se)
        {
            c++;
        }
    }
    if(c>0)
    printf("%d",c);
    if(c==0)
    {
         printf("0");
    }
}
int main()
{
    int n,arr[100],i,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    search(arr,n,se);
}