#include<stdio.h>
#include <ctype.h>
int main(){
    char str[100],k;
    int i=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++){
        k=tolower(str[i]);
        printf("%c",k);
    }
}