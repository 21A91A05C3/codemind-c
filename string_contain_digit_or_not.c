#include<stdio.h>
int main()
{
    char str[100];
    int i,s=0,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s++;
        }
        else
        {
             continue;
        }
        
    }
    if(s>0)
     printf("Contains %d digit",s);
    else
    printf("Doesn't contain digit");
}