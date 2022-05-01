#include<stdio.h>  
int main()
{
    //Initializing variables.
    char str[100] ;
    int i,sum = 0;
    scanf("%s",str);
    
    //Iterating each character through for loop.
    for (i= 0; str[i] != NULL; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  //Checking for numeric characters.
        {
            
            sum += (str[i] - '0'); //Adding numeric characters.

        }
    }
    //Printing result.
    printf("%d", sum);
    return 0; 
}