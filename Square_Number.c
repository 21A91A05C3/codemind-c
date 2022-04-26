#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq;
    scanf("%d",&n);
    sq=sqrt(n);
    if(n-sq*sq==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}