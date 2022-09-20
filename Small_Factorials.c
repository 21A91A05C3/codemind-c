#include<stdio.h>
int fact(int a){
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}
int main(){
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        printf("%d
",fact(a));
    }
}