#include<stdio.h>
int main()
{
   int n,i,j,n1;
   scanf("%d",&n);
   n1=n-1;
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       if(i==j || j==n1)
      {
         printf("x");
       }
       else
       {
         printf("0");
       }
     }
     n1--;
    printf("
");

   }
}

