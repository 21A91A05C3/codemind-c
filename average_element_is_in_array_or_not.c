#include<stdio.h>
int search(int *arr,int m,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int m,n,arr[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    m=sum/n;
    if(search(arr,m,n))
    {
        printf("True");
    }
    else
    printf("False");
    
}