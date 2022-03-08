#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    strlen(str);
    if(strlen(str)==10)
    {
        if(str[0]==0)
        {
            printf("Invalid");
        }
        else
        {
            printf("Valid");
        }
    }
    else
    {
        printf("Invalid");
    }
}