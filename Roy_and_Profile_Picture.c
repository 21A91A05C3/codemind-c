#include<stdio.h>
int main(){
    int i,n,m,a,b;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        if(a<n || b<n){
            printf("UPLOAD ANOTHER
");
        }
        else if(a==b || b==a){
            printf("ACCEPTED
");
        }
        else{
            printf("CROP IT
");
        }
    }
}