#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,sq,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        sq=pow(n,0.5);
        if(n-(sq*sq)==0)
        {
            printf("True
");
        }
        
        else
        {
            printf("False
");
        }
    }
    
}