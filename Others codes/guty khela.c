#include<stdio.h>
int main(){
    int n,a,b,j,i,m,c;
    while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        m=a%3;
        c=m/b;
        if(m%b==0){
            printf("%d\n",c);
        }
        else
            printf("no\n");
    }}
    return 0;
}
