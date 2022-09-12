#include<stdio.h>
#include<math.h>
int main(){
    int a,n,x,y;
    scanf("%d%d",&n,&a);
    x=pow(10,a);
    y=n%x;
    while(n>x){
        n/=10;
    }
    printf("%d",abs(n-y));
    
}