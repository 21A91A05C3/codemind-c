#include<stdio.h>
int main()
{
    int i=0,c=0;
    char str[100];
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        c++;
        i++;
    }
    printf("%d",c);
}