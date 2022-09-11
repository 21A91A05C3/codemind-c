#include<stdio.h>
int fi(int n){
    int d,c=0;
    while(n!=0){
        d=n%10;
        c++;
        n=n/10;
    }
    if(c%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n,a[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(fi(a[i])){
            c++;
        }
    }
    printf("%d",c);
}