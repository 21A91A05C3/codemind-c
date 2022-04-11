#include<stdio.h>
int main()
{
    int temp,start,end,rev,rem,num,rev_num;
    scanf("%d",&start);
    scanf("%d",&end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        rev=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
        }
        
        if(num==rev)
        {
            printf("%d ",num);
        }
    }
    
}