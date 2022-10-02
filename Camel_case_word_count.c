#include<stdio.h>
#include<string.h>
int main(){
    char st[1000];
    int i,c=0,k;
    scanf("%[^
]s",st);
    for(i=1;st[i]!=NULL;i++){
        // k=("%d",st[i]);
        if(st[i]>=65 && st[i]<=90){
            c+=1;
        }
        
    }
    printf("%d",c+1);
}