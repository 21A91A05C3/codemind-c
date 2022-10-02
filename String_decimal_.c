#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int i,c=0;
        char str[1000];
        scanf("%s",str);
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                c++;
            }
            
        }
        if(c==strlen(str))
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