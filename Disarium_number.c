#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,d,temp,k,sum=0,rev=0,m;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    i=1;
    while(rev!=0)
    {
      d=rev%10;
      
      k=pow(d,i);
      sum=sum+k;
      rev=rev/10;
      i++;
    }
    
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
     
}