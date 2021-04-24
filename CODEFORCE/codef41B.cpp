#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,y,a[100009],cont[100009],sum,s,b[100009];
    while(scanf("%d %d",&n,&m)!=EOF){
            sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&y);
        if(y==1){
            sum=sum+a[i];
            a[i]=0;
        }
    }
    int s1=0;
    for(int i=1;i<=n;i++){
        s1=s1+a[i];
        b[i]=s1;
    }
    int k=n-m+1;
    x=0;
    for(int i=1;i<=k;i++){
            s=(b[i+m-1]-b[i-1]);
            if(x<s){
                x=s;
            }
        }

    printf("%d\n",sum+x);}
    return 0;
}
