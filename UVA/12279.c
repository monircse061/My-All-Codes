#include<stdio.h>
int main(){
    int n,m,i,j,s[10000],k,t=0;
    while(scanf("%d",&n)&&n!=0){
    j=0;m=0;
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
        if(s[i]>0){
            j++;
        }
        else{
            m++;
        }
    }
    k=j-m;t++;
    printf("Case %d: %d\n",t,k);}
    return 0;
}
