#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,e=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
      if(str[i]>=33 && str[i]<=47 || str[i]>=91 && str[i]<=96 || str[i]>=123 && str[i]<=126||str[i]>=58 && str[i]<=64)
      c++;
    }
    
    printf("%d",c);
}