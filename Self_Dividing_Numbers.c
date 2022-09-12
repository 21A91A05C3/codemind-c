#include<stdio.h>
int self(int n){
    int d,temp;
    temp=n;
    while(temp){
        d=temp%10;
        if(d==0){
            return 0;
        }
        else if(n%d!=0){
            return 0;
        }
        temp/=10;
    }
    return 1;
}
int main(){
    int a,n,i;
    scanf("%d%d",&a,&n);
    for(i=a;i<(n+1);i++){
        if(self(i)){
            printf("%d ",i);
        }
    }
}