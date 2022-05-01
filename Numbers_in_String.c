#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,e=0,sum=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
        {
            c++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            sum=sum+(str[i]-'0');
        }
        else
        {
            e++;
        }
        
    }
    
    printf("%d",sum);
}