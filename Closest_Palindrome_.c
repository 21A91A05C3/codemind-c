#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n){
    int temp,rev=0,d;
    temp=n;
    while(n){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n,a,k,x;
    scanf("%d",&a);
    for(int j=a-1;j>0;j--){
        if(prime(j)){
           k=j;
           break;
        }
    }
    for(int j=a+1;j<a*a;j++){
        if(prime(j)){
           x=j;
           break;
        }
    }
    if(abs(x-a)>abs(a-k)){
        printf("%d
",k);
    }
    else if(abs(x-a)==abs(a-k)){
        printf("%d %d",k,x);
    }
    else{
        printf("%d
",x);
    }
    
}