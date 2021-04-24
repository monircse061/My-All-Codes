#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,cont=0;
    scanf("%d",&n);
    m=n/2;
    x=n%2;
    if((m+x)<=18){
    for(int i=1;i<=m;i++){

        cout<<"8";
    }
    for(int i=1;i<=x;i++){
        cout<<"6";
    }}
    else{
        cout<<"-1";
    }
    return 0;
}
