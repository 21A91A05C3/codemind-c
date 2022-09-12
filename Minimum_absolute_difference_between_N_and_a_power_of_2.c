#include<stdio.h>
#include<math.h>
int main(){
    int n,x,i,d,z,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x=pow(2,i);//1,2,4,8,16
        if(x<=n){
            d=x;
        }
        else{
            
            break;
        }
    }
    for(i=0;i<n;i++){
        z=pow(2,i);
        if(z>n){
          y=z;
          break;
        }
        else{
           continue;
        }
    }
    if(abs(y-n)>abs(d-n)){
        printf("%d
",abs(d-n));
    }
    else{
        printf("%d
",abs(y-n));
    }
}