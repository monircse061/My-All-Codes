#include<bits/stdc++.h>
using namespace std;
int cont[1000009];
void fun(int n){
    for(int i=2;i*i<=n;i++){
        if(cont[i]==0){
            for(int j=2;i*j<=n;j++){
                cont[i*j]=1;
            }
        }
    }
}
int main(){
    int n,a,b;
    scanf("%d",&n);
    fun(n);
    a=n/2;
    b=n-(n/2);
    while(1){
        if(cont[a]!=0&&cont[b]!=0&&a!=1&&b!=1){
            cout<<a<<" "<<b;
            break;
        }
        a--;b++;
    }
    /*for(int i=2;i<=n;i++){
        if(cont[i]==0)
            //cout<<i<<" ";
    }*/
    return 0;
}
