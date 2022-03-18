#include<stdio.h>
int happynumber(int num)
{
    int sum=0,rem=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem);
        num=num/10;
    }
    return sum;
}
int main()
{
    int num,result;
    scanf("%d",&num);
    result=num;
    while(result!=1 && result!=4)
    {
     result=happynumber(result);
    }
    if(result==1)
    {
        printf("True");
    }
    else if(result==4)
    {
        printf("False");
    }
    return 0;
}