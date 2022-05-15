#include<stdio.h>
int main()
{
    int i=0,e=0;
    char str[200];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            e++;
        }
    }
    printf("%d",e+1);
    
     
}