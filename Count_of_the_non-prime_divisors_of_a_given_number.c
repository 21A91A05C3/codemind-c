#include<stdio.h>
int main()
{
    int i, a,d=0,c=0,e=0,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
            d=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    d++;
                }
            }
            if(d==2)
            {
                e++;
            }
        }
    }
    printf("%d",c-e);
}