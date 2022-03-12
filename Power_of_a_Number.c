#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,r,k,m;
    scanf("%d%d%d",&n,&p,&r);
    k=pow(n,p);
    m=k%r;
    printf("%d",m);
    
    
    
}