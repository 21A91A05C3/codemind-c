#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a[100],x=0,y=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            x+=a[i];
        }
        else{
            y+=a[i];
        }
    }
    int k=abs(x-y);
    if(k%4==0){
        printf("X");
    }
    else{
        printf("Y");
    }
}